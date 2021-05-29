#include "Vector.h"
#include <iostream>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "rus");
	int	mass[3] = { 2,1,3 };
		try
		{
			Vector x(3, mass);
			cout << "Элементы группы: ";
			cout << x;
			cout << "Введите индекс\n";
			int i;
			cin >> i;
			cout << "Элемент : ";
			cout << x[i] << endl;
			cout << "Вычитаем \n";
			--x;
			cout << x;
			cout << "Вычитаем \n";
			--x;
			cout << x;
			cout << "Вычитаем \n";
			--x;
			cout << x;
			cout << "Вычитаем \n";
			--x;
			cout << x;
		}
		catch (int)
		{
			cout << "Ошибка" << endl;
		}
		return 0;
	}

