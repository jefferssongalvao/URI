/*
 * Leia 3 valores, no caso variáveis A, B e C, que são as três notas de um aluno.
 * A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2,
 * a nota B tem peso 3 e a nota C tem peso 5.
 * Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double A, B, C, MEDIA;

	cin >> A;
	cin >> B;
	cin >> C;

	MEDIA = ((A * 2.0) + (B * 3.0) + (C * 5.0)) / 10;

	cout << fixed << setprecision(1);
	cout << "MEDIA = " << MEDIA << endl;
}