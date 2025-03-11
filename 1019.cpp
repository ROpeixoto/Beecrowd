#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int seg, hora = 0 , min = 0, segg = 0;
	cin >> seg;

	hora = seg / 3600;
	min = (seg - hora * 3600) / 60;
	segg = ((seg - hora * 3600)- min * 60);
	cout << hora << ":" << min << ":" << segg << endl;
}
