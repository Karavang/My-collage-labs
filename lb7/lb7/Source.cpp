#include<iostream>
#include <cmath> 
using namespace std;

double f(double u)
{
	return cos(u + 1) * cos(u + 1) / exp(-u);
}

int main()
{
	double a, b, x, z;
	cout << "Input a=";
	cin >> a;
	cout << "Input b=";
	cin >> b;
	cout << "Input x=";
	cin >> x;
	z = f(a * x) / f(b * x);
	cout << endl << "z = " << z;
	system("pause");
	return 0;
}