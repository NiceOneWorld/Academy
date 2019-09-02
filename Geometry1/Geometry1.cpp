#include <iostream>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	bool exit = false;
	char answer = 'y';
	do {
		system("cls");
		cout << "\n\t ==================================== ";
		cout << "\n\t  Программа вычисления площади фигур  ";
		cout << "\n\t ==================================== ";
		cout << "\n\t 1 - Площадь прямоугольника		   ";
		cout << "\n\t 2 - Площадь круга					   ";
		cout << "\n\t 3 - Площадь треугольника			   ";
		cout << "\n\t 4 - Площадь трапеции				   ";
		cout << "\n\t 5 - Выход из программы			   ";
		cout << "\n\t ==================================== ";
		// - > Диалок выбора действия:
		int k;
		cout << "\n\n> Введите номер нужного действия.	   ";
		cin >> k;
		switch (k)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			exit = true;
			break;
		}

		//Точка экстреного выхода
		if (exit == true)
			break;
		//Диалог продолжения
		cout << "Продолжать (y/n)? -";
			cin >> answer;
	} while (answer == 'y');
	cout << "\n\nПрограмма завершена!";
	return 0;
}
