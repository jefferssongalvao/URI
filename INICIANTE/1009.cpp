/*
 * Faça um programa que leia o nome de um vendedor,
 * o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
 * Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas,
 * informar o total a receber no final do mês, com duas casas decimais.
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	cout << fixed << setprecision(2);

	string nome;
	double fixo, vendas;

	cin >> nome;
	cin >> fixo;
	cin >> vendas;

	cout << "TOTAL = R$ " << fixo + (vendas * 0.15) << endl;

}