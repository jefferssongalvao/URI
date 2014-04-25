/*
 * Dois carros (X e Y) partem em uma mesma direção.
 * O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
 * Leia a distância (em Km) e calcule quanto tempo leva (em minutos)
 * para o carro Y tomar essa distância do outro carro.
 */

#include <iostream>
#define x 1000
#define y 1500

using namespace std;

int main(){

	int km, distanciaX = 0, distanciaY = 0, min = 0;
    	cin >> km;
    km *= 1000;

    while(distanciaY-distanciaX < km){
    	distanciaX += x;
    	distanciaY += y;
    	min++;
    }
    
    cout << min << " minutos\n";

    return 0;

}
