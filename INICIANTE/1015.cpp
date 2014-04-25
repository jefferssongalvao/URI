/*
 * Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano,
 * p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, 
 * mostrando 4 casas decimais após a vírgula, segundo a fórmula:
 * 			D = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	cout << fixed << setprecision(4);
    double x1, x2, y1, y2;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    cout << sqrt(pow(x2-x1,2)+pow(y2-y1,2)) << "\n";

    return 0;

}
