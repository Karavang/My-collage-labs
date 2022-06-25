#include <iostream>
#include <string>
using namespace std;
int getLastSymNotSpace() {
    string str1 = "Hello   ";
    int i = str1.length() - 1;
	regex target(" ");
	string replacement = "";
	string s2 = std::regex_replace(s1, target, replacement);
	{
        i--;
    }
    cout << i << endl;
    return i;
}
string Convertator(string b) {
    for (int i = b.length(); i >= 0; i--) {
        cout << b[i];
    }
    cout << endl;
    return b;
}
string Aloner(string c) {
    string b;
    for (int i = 0; i <= c.length(); i++) {
        for (int j = i + 1; j <= c.length(); j++) {
            if (c[i] == c[j]) {
                b += c[j];
            }
        }


    }
    cout << b << endl;
    return b;
}
int main() {
    string b, c;
    cout << endl;
	getLastSymNotSpace();
    cout << "Input symbols:";
    cin >> b; cout << endl;
	Convertator(b);
    cout << "Input many double symbols:";
    cin >> c; cout << endl;
	Aloner(c);
    system("pause");
    return 0;
}
