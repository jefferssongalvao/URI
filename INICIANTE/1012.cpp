/*
 * Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C.
 * Em seguida, calcule e mostre:  
 *				a) a área do triângulo retângulo que tem A por base e C por altura. 
 *				b) a área do círculo de raio C. (pi = 3.14159) 
 *				c) a área do trapézio que tem A e B por bases e c por altura. 
 *				d) a área do quadrado que tem lado B. 
 *				e) a área do retângulo que tem lados A e B. 
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