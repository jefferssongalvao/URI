/*
 * Leia dois valores inteiros.
 * A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD.
 * A seguir mostre a variável PROD com mensagem correspondente.   
 */

#include <iostream>

using namespace std;

int main() {

	int A, B, PROD;

	cin >> A;
	cin >> B;

	PROD = A * B;

	cout << "PROD = " << PROD << endl;
}