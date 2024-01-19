#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int choice;
	double num1, num2;

	while (true) {

		cout << "Выбирете опирацию: " << endl;
		cout << "1)Сложение: " << endl;
		cout << "2)Вычитание: " << endl;
		cout << "3)Умножение: " << endl;
		cout << "4)Деление: " << endl;
		cout << "5)Возведение в степень: " << endl;
		cout << "6)Корень: " << endl;
		cout << "7)1% от числа: " << endl;
		cout << "8)Факториал: " << endl;
		cout << "9)Выход: " << endl;

		cin >> choice;

		if (choice == 9) {
			break;
		}
		if (choice >= 1 && choice <= 8) {
			cout << "Введите первое число: ";
			cin >> num1;
			if (choice != 6 && choice != 7 && choice != 8) {
				cout << "Введите второе число: ";
				cin >> num2;
			}
			double result = 0;
			if (choice == 1) {
				result = num1 + num2;
			}
			else if (choice == 2) {
				result = num1 - num2;
			}
			else if (choice == 3) {
				result = num1 * num2;
			}
			else if (choice == 4) {
				result = num1 / num2;
			}
			else if (choice == 5) {
				result = pow(num1, num2);

			}
			else if (choice == 6) {
				if (num1 >= 0) {
					result = sqrt(num1);


				}

			}
			else if (choice == 7) {
				result = num1 / 100;

			}
			else if (choice == 8) {
				if (num1 >= 0) {
					int n = static_cast<int>(num1);
					int factorial = 1;
					for (int i = 1; i <= n; i++) {
						factorial *= i;
					}
					result = factorial;
				}
				else {
					cout << "Ошибка: нельзя вычислить факториал отрицательного числа!" << endl;
					continue;
				}
			}
			cout << "Результат: " << result << endl;
		}
		else {
			cout << "Нет такой операции" << endl;
		}
	}
	return 0;
}