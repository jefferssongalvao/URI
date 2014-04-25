/*
 * Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
 *  Utilize a fórmula:
 *                      maior = (a + b + abs(a-b)) / 2;
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, maior;

    cin >> a;
    cin >> b;
    cin >> c;

    maior = (a + b + abs(a-b)) / 2;
    maior = (maior + c + abs(maior-c)) / 2;

    cout << maior << " eh o maior";

    return 0;

}
