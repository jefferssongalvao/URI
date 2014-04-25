/*
 * Calcule o consumo médio de um automóvel
 * sendo fornecidos a distância total percorrida (em Km)
 * e o total de combustível gasto (em litros).
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cout << fixed << setprecision(3);
    double km, litros;

    cin >> km;
    cin >> litros;

    cout << km/litros << " km/l\n";

    return 0;

}
