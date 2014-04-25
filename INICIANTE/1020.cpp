/*
 * Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias
 * Obs.: 
 *		Apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias.
 *		Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias,
 *		como 360, 363 ou 364.
 *		Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
 */

#include <iostream>

using namespace std;

int main(){

	int idade;

	cin >> idade;

	cout << idade/365 << " ano(s)\n";
	idade %= 365;
	cout << idade/30 << " mes(es)\n";
	idade %= 30;
	cout << idade << " dia(s)\n";

}