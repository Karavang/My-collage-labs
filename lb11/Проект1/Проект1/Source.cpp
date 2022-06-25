#include "Fraction.h" // Підключення власного заголовного файлу
#include "printArray.cpp"
#include <iostream>
using namespace std;
int main()
{
/*	fraction a = init();
	show(a);
	fraction b = init();
	show(b);
	fraction c = add(a, b);
	cout << "a+b ="; show(c);
	fraction d = sub(a, b);
	cout << "a-b ="; show(d);
	fraction e = mul(a, b);
	cout << "a*b ="; show(e);
	fraction f = div(a, b);
	cout << "a/b ="; show(f);*/


	int n;
	cout << "Input n="; cin >> n;
	int** A = new int*[n];
	for (int i = 0; i < n; i++) A[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) A[i][j] = rand() % 101;
	show(A, n, n);

	for (int i = 0; i < n; i++) delete A[i];
	delete[]A;

	system("pause");
	return 0;
}