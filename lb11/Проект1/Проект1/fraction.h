// Власний заголовний файл - хедер
#ifndef FRACTION_H // макрос визначення нашого хедеру
#define FRACTION_H
struct // сворення структури для дробу чисельник та знаменник
	fraction {
	int nom, denom;
};
fraction init(); // для ініціалізації змінних створеного типу
void show(fraction fr); // для відображення дробу
int nod(int a, int b); // для визначення НЗД
fraction abs(fraction fr);// для абсолютного значення дробу
fraction simp(fraction fr); // для спрощення дробу
fraction add(fraction fr1, fraction fr2); // додавання
fraction sub(fraction fr1, fraction fr2); // віднімання
fraction mul(fraction fr1, fraction fr2); // множення
fraction div(fraction fr1, fraction fr2); // поділ
#endif // !FRACTION_H
