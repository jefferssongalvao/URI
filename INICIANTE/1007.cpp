/*
 * Leia quatro valores inteiros A, B, C e D.
 * A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D
 * segundo a fórmula: DIFERENCA = (A * B - C * D).
 */

#include <iostream>

using namespace std;

int main() {

	int A, B, C, D, DIFERENCA;

	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;

	DIFERENCA = ((A * B) - (C * D));

	cout << "DIFERENCA = " << DIFERENCA << endl;
}