/*
 * Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
 *      a) a área do triângulo retângulo que tem A por base e C por altura.
 *      b) a área do círculo de raio C. (pi = 3.14159)
 *      c) a área do trapézio que tem A e B por bases e c por altura.
 *      d) a área do quadrado que tem lado B.
 *      e) a área do retângulo que tem lados A e B.
 */

#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "TRIANGULO: " << (a*c)/2 << endl;
    cout << "CIRCULO: " << pi * (c*c) << endl;
    cout << "TRAPEZIO: " << ((a+b) * c)/2 << endl;
    cout << "QUADRADO: " << b*b << endl;
    cout << "RETANGULO: " << a*b << endl;

    return 0;

}
