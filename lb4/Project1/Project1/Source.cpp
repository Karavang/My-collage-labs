#include<iostream> 
#include <cmath> 
using namespace std;


int main()
{
	int n;
	cout << "Input n=";
	cin >> n;
	int* x = new int[n];
	for (int i = 0; i < n; i++) x[i] = rand() % 101 - 50;
	for (int i = 0; i < n; i++) cout << x[i] << '\t';
	int sum = 0, k = 0;
	double prod = 1;
	for (int i = 0; i < n; i++)
		if (x[i] <= 0) sum += x[i]; else { prod *= x[i]; k++; }
	if (k != 0) prod = pow(prod, 1 / (double(k)));
	cout << endl << "Sum = " << sum;
	cout << endl << "Prod = " << prod;
	delete[]x;
	system("pause");
	return 0;
}