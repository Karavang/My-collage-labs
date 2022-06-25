#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string x = "myOut.txt";
	ofstream fout;
	fout.open(x);
	cin >> x;
	fout << x;
	fout.close();
	return 0;
}