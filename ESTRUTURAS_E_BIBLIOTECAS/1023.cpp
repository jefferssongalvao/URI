/*
 * 
 * Devido às constantes estiagens que aconteceram nos últimos tempos em algumas regiões do Brasil,
 * o governo federal criou um órgão para a avaliação do consumo destas regiões com finalidade
 * de verificar o comportamento da população na época de racionamento.
 * Este órgão responsável irá pegar algumas cidades (por amostragem) e verificará como está sendo
 * o consumo de cada uma das pessoas da cidade e o consumo médio de cada cidade por habitante.
 *
 * Entrada
 *
 * A entrada contém vários casos de teste. 
 * A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*106), 
 * indicando a quantidade de imóveis. 
 * As N linhas contém um par de valores X (1 ≤ X ≤ 10) e Y (1 ≤ Y ≤ 200), 
 * indicando a quantidade de moradores de cada imóvel e o respectivo consumo total de cada imóvel (em m3). 
 * Com certeza, nenhuma residência consome mais do que 200 m3 por mês. 
 * O final da entrada é representado pelo número zero.
 * 
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Lista {
	int valor;
	int *next;
};

void ordenar(Lista vetor[], int inicio, int fim){
    Lista pivo, aux;
    int i, j, meio;

    i = inicio;
    j = fim;

    meio = (int) ((i + j) / 2);
    pivo = vetor[meio];

    do{
        while (vetor[i].valor < pivo.valor) i = i + 1;
        while (vetor[j].valor > pivo.valor) j = j - 1;

        if(i <= j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i = i + 1;
            j = j - 1;
        }
    }while(j > i);

    if(inicio < j) ordenar(vetor, inicio, j);
    if(i < fim) ordenar(vetor, i, fim);

}

int main(){

	cout << fixed << setprecision(3);
	int n, x, y, cidade = 1, *pessoas, totalPessoas;
	Lista *consumo;
	double consumoMedio, consumoTotal;

	bool flag = false;

	while(cin >> n) {

		if(n == 0) 
			break;
		else if(flag)
			cout << endl;


		cout << "Cidade# " << cidade << endl;

		consumo = new Lista[n];
		pessoas = new int[n];
		consumoTotal = 0;
		totalPessoas = 0;

		for(int i = 0; i < n; i++){
			cin >> x;
			totalPessoas += x;

			cin >> y;
			consumoTotal += y;
			
			pessoas[i] = x;
			consumo[i].valor = y/x;
			consumo[i].next = &pessoas[i];
		}

		ordenar(consumo, 0, n-1);

		for(int i = 0; i < n; i++) {
			cout << *consumo[i].next  << "-" << consumo[i].valor;
			if(i == n-1)
				cout << endl;
			else
				cout << " ";
		}

		double int_part;
        int frac_part;
        frac_part = (int) (modf ((double)consumoTotal/totalPessoas, &int_part) *100);

		if(frac_part < 10)
            cout << "Consumo medio: " << (int)int_part <<  ".0" << (int)frac_part << " m3.\n";
        else
            cout << "Consumo medio: " << (int)int_part <<  "." << (int)frac_part << " m3.\n";

		flag = true;

		cidade++;

		delete consumo;
		delete pessoas;
	}

}