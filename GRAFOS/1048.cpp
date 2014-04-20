#include <iostream>
 
using namespace std;
 
// algumas definições
    #define maxV 501
    #define maxCST 999999
    #define INFINITO 999999
    #define Vertices int
 
struct grafo {
    int V;
    int A;
    int adj[501][501];
};

typedef struct grafo * Grafo;
 
void controla (Grafo G, Vertices s, Vertices parnt[], double cst[], Vertices Destino) {
    Vertices w, w0, fr[maxV];
    for(w = 0; w < G->V; w++) {
        parnt[w] = -1;
        cst[w]   = maxCST;
    }
    fr[s]  = s;
    cst[s] = 0.0;
 
    while(1) {
        double mincst = maxCST;
        for(w = 0; w < G->V; w++) {
            if(parnt[w] == -1 && mincst > cst[w]) 
                mincst = cst[w0=w];
        }
        if(mincst == maxCST) break;
        parnt[w0] = fr[w0];
 
        for(w = 0; w < G->V; w++) {
            if(cst[w] > cst[w0] + G->adj[w0][w]){
                cst[w] = cst[w0] + G->adj[w0][w];
                fr[w] = w0;
            }
        }
    }
 
    if(cst[Destino] < INFINITO)
        cout << cst[Destino];
    else
        cout << "Nao e possivel entregar a carta";
    cout << "\n";
}

int main(void) {
    Grafo D;
 
    D = new (struct grafo);
 
    int i, j, cidades, acordos, consultas, Origem, Destino, Tempo;
    Vertices parnt[501];
    double cst[501];
 
    while(cin >> cidades &&  cin >> acordos) {
        if(cidades == 0) break;
 
        for(i = 0; i <= cidades; i++)
            for(j = 0; j <= cidades; j++)
                D->adj[i][j]=INFINITO;
        for(i = 0; i < acordos; i++){
            cin >> Origem;
            cin >> Destino;
            cin >> Tempo;
            if(D->adj[Destino][Origem] != INFINITO){
                D->adj[Origem][Destino] = 0;
                D->adj[Destino][Origem] = 0;
            } else
                D->adj[Origem][Destino] = Tempo;
        }
        D->V = cidades+1;
        D->A = acordos;
 
        cin >> consultas;
 
        for(i = 0; i < consultas; i++) {
            cin >> Origem;
            cin >> Destino;
            controla (D, Origem, parnt, cst, Destino);
        }
        cout << "\n";
 
    }
}