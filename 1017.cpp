#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	float a,b;
	cin >> a >> b;
	a = a * b;
	a = a / 12;
	cout << fixed << setprecision(3);
	cout << a << endl;
}
