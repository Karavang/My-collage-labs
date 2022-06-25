#include "printArray.cpp"
#include <iostream> 
using namespace std;
void show(int** A, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << A[i][j] << '\t';
		cout << endl;
	}

}
/*int main()
{
	
	for (int i = 0; i < n; i++)
	{
		int min = A[i][0];
		for (int j = 1; j < n; j++)
			if (A[i][j] < min) min = A[i][j];
		cout << "A " << i << "   min = " << min << endl;
	}


	system("pause");
	return 0;
}
*/