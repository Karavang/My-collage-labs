#include <iostream> 
using namespace std;
int main()
{
	int n;
	cout << "Input n="; cin >> n;
	int** A = new int* [n];
	for (int i = 0; i < n; i++) A[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) A[i][j] = rand() % 101;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << A[i][j] << '\t';
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		int min = A[i][0];
		for (int j = 1; j < n; j++)
			if (A[i][j] < min) min = A[i][j];
		cout << "A " << i << "   min = " << min << endl;
	}

	for (int i = 0; i < n; i++) delete A[i];
	delete[]A;

	system("pause");
	return 0;
}