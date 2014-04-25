/*
 * Leia um valor inteiro,
 * que é o tempo de duração em segundos de um determinado evento em uma fábrica
 * e informe-o expresso no formato horas:minutos:segundos.
 */

#include <iostream>

using namespace std;

int main(){

	int tempo;
    
    cin >> tempo;

    cout << tempo/3600 << ":";
    tempo %= 3600;
    cout << tempo/60 << ":";
    tempo %= 60;
    cout << tempo << endl;

    return 0;

}
