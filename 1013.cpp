#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	a = (a + b + abs(a-b)) / 2;
	a = (a + c + abs(a-c)) / 2;
	cout << a << " eh o maior" << endl;
}
