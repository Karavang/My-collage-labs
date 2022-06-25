#include "Fraction.h"
#include <iostream>
using namespace std;
int nod(int a, int b)
{
	if (a == 0) return 0;
	if (a == b) return a; else a > b ? nod(a - b, b) : nod(a, b - a);
}
fraction simp(fraction fr)
{
	int tmp = nod(abs(fr.nom), abs(fr.denom));
	if (tmp == 0) { fr.nom = 0; fr.denom = 1; }
	else { fr.nom /= tmp; fr.denom /= tmp; }
	return fr;
}
fraction abs(fraction fr)
{
	fraction tmp;
	tmp.denom = abs(fr.denom);
	tmp.nom = abs(fr.nom);
	return tmp;
}
fraction init()
{
	fraction fr;
	cout << "Input nomerator ";
	cin >> fr.nom;
	// робимо у циклі щоб користувач 0 не вводив
	do {
		cout << "Input denomerator ";
		cin >> fr.denom;
	} while (!fr.denom);
	// якщо знаменник від'ємний, то множимо дріб на -1
	if (fr.denom < 0) { fr.nom *= -1; fr.denom *= -1; }
	return simp(fr);
}
void show(fraction fr)
{ //якщо знаменник = 1 то не виводимо його
	fr.denom == 1 ? cout << fr.nom << endl : cout << fr.nom << '/' << fr.denom << endl;
}
fraction add(fraction fr1, fraction fr2)
{
	fraction tmp;
	tmp.denom = fr1.denom*fr2.denom;
	tmp.nom = fr1.nom*fr2.denom + fr2.nom*fr1.denom;
	return simp(tmp);
}
fraction sub(fraction fr1, fraction fr2)
{
	fraction tmp;
	tmp.denom = fr1.denom*fr2.denom;
	tmp.nom = fr1.nom*fr2.denom - fr2.nom*fr1.denom;
	return simp(tmp);
}
fraction mul(fraction fr1, fraction fr2)
{
	fraction tmp;
	tmp.denom = fr1.denom*fr2.denom;
	tmp.nom = fr1.nom*fr2.nom;
	return simp(tmp);
}
fraction div(fraction fr1, fraction fr2)
{
	fraction tmp;
	tmp.nom = fr1.nom*fr2.denom;
	tmp.denom = fr1.denom*fr2.nom;
	return simp(tmp);
}