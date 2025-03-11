#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float n1, n2, n3, n4;
	double media, ex, mediaf;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
	cout << fixed << setprecision (1);
	cout << "Media: " << media << endl;
	if (media < 5.0)
{
	cout << "Aluno reprovado." << endl;
	return 0;
}
	else if (media >= 7.0)
	{
	cout << "Aluno aprovado." << endl;
	return 0;
	}
	else
	{
	cout << "Aluno em exame." << endl;
}
    cin >> ex;
	cout << "Nota do exame: " << ex << endl;
	mediaf = (media + ex) / 2;
	if (mediaf <= 4.9)
{
	cout << "Aluno reprovado." << endl;

	cout << "Media final: " <<  mediaf << endl;
	return 0;
}
	else if (mediaf >= 5.0)
{
	cout << "Aluno aprovado." << endl;
cout << "Media final: " << mediaf << endl;
	return 0;
}
}
