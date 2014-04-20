/*
 * Faça um programa que calcule o mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
 * A fórmula para calcular o volume é: 4/3 * pi * R³.
 * Considere (atribua) para pi o valor 3.14159.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.14159

using namespace std;

int main() {

	cout << fixed << setprecision(3);

	double r, volume;

	cin >> r;

	volume = ( 4 * pi * pow(r,3) ) / 3;

	cout << "VOLUME = " << volume << endl;

}