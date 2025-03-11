#include <iostream>
using namespace std;

int main()
{
	int cem, cinq, vint, dez, cinc, dois, valor;
	float um, x;
	cin >> x;
	x = valor;
	cem = valor / 100;
	cinq = valor % 100 / 50;
	vint = valor % 100 % 50 / 20;
	dez = valor % 100 % 50 % 20 / 10;
	cinc = valor % 100 % 50 % 20 % 10 / 5;
	dois = valor % 100 % 50 % 20 % 10 % 5 / 2;
	um = valor % 100 % 50 % 20 % 10 % 5 % 2 / 1;
	
	
	cout << valor << endl;
	cout << cem << " nota(s) de R$ 100.00" << endl;
	cout << cinq << " nota(s) de R$ 50.00" << endl;
	cout << vint << " nota(s) de R$ 20.00" << endl;
	cout << dez << " nota(s) de R$ 10.00" << endl;
	cout << cinc << " nota(s) de R$ 5.00" << endl;
	cout << dois << " nota(s) de R$ 2.00" << endl;
	cout << um << " moeda(s) de R$ 1.00" << endl;
	
	um = 1.00;
	
	um = um / 0.50;
	
	cout << um << " moeda(s) de R$ 0.50" << endl;
	
	um = um / 0.25;
	
	cout << um << " moeda(s) de R$ 0.25" << endl;
	
	um = um / 0.10;
	
	cout << um << " moeda(s) de R$ 0.10" << endl;
	
	um = um / 0.05;
	
	cout << um << " moeda(s) de R$ 0.50" << endl;
		
	um = um / 0.01;
	
	cout << um << " moeda(s) de R$ 0.01" << endl;
	
	return 0;
}
