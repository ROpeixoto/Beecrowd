#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

string ab;
double b,c;
cin >> ab;
cin >> b >> c;

b = b + c * 0.15;
cout << fixed << setprecision (2);
cout << "TOTAL = R$ " << b << endl;
    return 0;
}
