// ������� ���������� ���� - �����
#ifndef FRACTION_H // ������ ���������� ������ ������
#define FRACTION_H
struct // �������� ��������� ��� ����� ��������� �� ���������
	fraction {
	int nom, denom;
};
fraction init(); // ��� ����������� ������ ���������� ����
void show(fraction fr); // ��� ����������� �����
int nod(int a, int b); // ��� ���������� ���
fraction abs(fraction fr);// ��� ����������� �������� �����
fraction simp(fraction fr); // ��� ��������� �����
fraction add(fraction fr1, fraction fr2); // ���������
fraction sub(fraction fr1, fraction fr2); // ��������
fraction mul(fraction fr1, fraction fr2); // ��������
fraction div(fraction fr1, fraction fr2); // ����
#endif // !FRACTION_H
