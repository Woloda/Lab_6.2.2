// 2 Спосіб --- "Рекурсивний"
#include <iostream>
#include <time.h>
#include <iomanip>
#include <Windows.h>

void value_elements(int* a, const int elements, int Low, int High, int index);
void vuvestu(int* a, const int elements, int index);
void start(int* a, const int elements, int imin, int min, int index, int j_index);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));

	const int elements = 20;
	int a[elements];

	int Low = -30;
	int High = 40;

	value_elements(a, elements, Low, High, 0);

	std::cout << "сформований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu(a, elements, 0);

	std::cout << std::endl;
	std::cout << std::endl;

	start(a, elements, 0, a[0], 0, 1);

	std::cout << "Модифікований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu(a, elements, 0);

	return 0;
}

void value_elements(int* a, const int elements, int Low, int High, int index)
{
	a[index] = Low + rand() % (High - Low + 1);
	if (index < elements - 1)
		value_elements(a, elements, Low, High, index + 1);

}

void vuvestu(int* a, const int elements, int index)
{
	std::cout << std::setw(5) << a[index];
	if (index < elements - 1)
		vuvestu(a, elements, index + 1);
	else;
}

void start(int* a, const int elements, int imin, int min, int index, int j_index)
{
	if (a[j_index] % 2);
	else
		if (a[imin] > a[j_index])
		{
			imin = j_index;
		}
	if (j_index < elements - 1)
		return start(a, elements, imin, min, index, j_index + 1);
	else;
	a[index] = a[imin];
	a[imin] = min;
}
