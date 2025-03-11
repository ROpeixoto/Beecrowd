#include <iostream>
using namespace std;
int main()
{
int x, ano, mes, dia;

cin >> x;

ano = x / 365;
mes = (x - ano * 365) / 30;
dia = (x % 365) % 30;
cout << ano << " ano(s)" << endl;
cout << mes << " mes(es)" << endl;
cout << dia << " dia(s)" << endl;

return 0;
}
