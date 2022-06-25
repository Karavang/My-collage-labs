#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i = 0;
	
	while (i<=61)
	{
		i++;
		cout << "2^" << i<<"="<< pow(2, i)<<endl;
		
	}
	system("pause");
	return 0;
}