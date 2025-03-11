#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 int num, wh;
 float rh,r;
cin >> num >> wh >> rh;
cout << "NUMBER = " << num << endl;

r = wh * rh;
cout << fixed << setprecision (2);
cout << "SALARY = U$ " << r << endl;
    return 0;
}
