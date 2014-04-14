/*
 * A fórmula para calcular a área de uma circunferência é: area = π . raio².
 * Considerando que para este problema que π = 3.14159:
 * - Efetue o cálculo da área, elevando o valor de Raio ao quadrado e multiplicando por π.
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	cout << fixed << setprecision(4);

	double A;
	double R;
	double PI = 3.14159;

	cin >> R;

	A = PI * pow(R,2);

	cout << "A=" << A << endl;
}