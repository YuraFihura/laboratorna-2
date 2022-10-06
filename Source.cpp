
// Lab_02.cpp
// Фігури Юрія
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 24


#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double a;
	double z1;
	double z2;
	cout << "a = "; cin >> a;
	z1 = (sin(a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));
	//z2 = tan(3 * a);
	z2 = sin(3*a) / cos(3*a);
	cout << "z1 =" << z1;
	cout << "   z2 =" << z2;
	cin.get();
	return 0;

}

