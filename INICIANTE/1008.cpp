/*
 * Escreva um programa que leia o número de um funcionário,
 * seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário.
 * A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	cout << fixed << setprecision(2);

	int f, h;
	double valor;

	cin >> f;
	cin >> h;
	cin >> valor;

	cout << "NUMBER = " << f << endl;
	cout << "SALARY = U$ " << h*valor << endl;

}