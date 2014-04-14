/*
 * Neste problema deve-se ler o código de uma peça 1, o número de peças 1,
 * o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2,
 * o valor unitário de cada peça 2 e calcula e mostra o valor a ser pago.
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	cout << fixed << setprecision(2);

	int p1, p2, q1, q2;
	double v1, v2;

	cin >> p1;
	cin >> q1;
	cin >> v1;
	cin >> p2;
	cin >> q2;
	cin >> v2;

	cout << "VALOR A PAGAR: R$ " << (v1*q1) + (v2*q2) << endl;

}