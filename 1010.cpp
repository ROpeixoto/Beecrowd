#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b, d, e;
	float c, f;
	cin >> a >> b >> c;
	cin >> d >> e >> f;
	
	a = b * c;
	d = e * f;
	d = d + a;
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << d << endl;
}
