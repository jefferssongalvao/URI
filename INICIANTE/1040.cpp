/*
 * Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal,
 * correspondente às quatro notas de um aluno.
 * Calcule a média com pesos 2, 3, 4 e 1, respectivamente,
 * para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ".
 * Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.".
 * Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.".
 * Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas,
 * o programa deve imprimir a mensagem "Aluno em exame.".
 * 
 * No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
 * Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
 * Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2).
 * e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.",
 * (caso a média tenha ficado 4.9 ou menos).
 * Para ambos os casos (aprovado ou reprovado) na última linha apresente uma mensagem
 * "Media final: " seguido da média final para esse aluno.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	cout << fixed << setprecision(1);

	double n1, n2, n3, n4, media;

	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;

	media = (n1*2+n2*3+n3*4+n4)/10;

	cout << "Media: " << media << endl;

	if(media >= 7)
		cout << "Aluno aprovado.\n";
	else if(media < 5)
		cout << "Aluno reprovado.\n";
	else {
		cout << "Aluno em exame.\n";
		double rec;
			cin >> rec;
			cout << "Nota do exame: " << rec << endl;
			media = (media+rec)/2;
			if(media >= 5)
				cout << "Aluno aprovado.\n";
			else
				cout << "Aluno reprovado.\n";
			cout << "Media final: " << media << endl;
	}
}