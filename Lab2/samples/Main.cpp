#include <cstdio>
#include <string>

#include <iostream>
#include "Pol.h"
#include "Pol_Mon.h"

#include"Hash_Tab.h"
#include"UnSort_Tab.h"
#include"Sort_Tab.h"

using namespace std;



/*int main() {
	setlocale(LC_ALL, "Russian");
	TPolinom mass[10];
	TPolinom res;
	std::string s;
	std::cout << "Введите ваш полином. Пример: 5х^6yz^2+3yz^8" << std::endl;
	TPolinom zero("");
	int menu = 1;
	int i = 1;
	std::cin >> s;
	TPolinom First(s);
	mass[1]= First;
	i++;
	int a, b, c;
	std::cout << "Меню:" << endl;
	std::cout << "1. Добавить новый полином" << endl;
	std::cout << "2. Удалить полином" << endl;
	std::cout << "3. Сумма 2-х полиномов" << endl;
	std::cout << "4. Разность 2-х полиномов" << endl;
	std::cout << "5. Умножение полинома на число" << endl;
	std::cout << "6. Произведение 2-х полиномов" << endl;
	std::cout << "7. Вывести полином" << endl;
	std::cout << "8. Вывести список доступных полиномов" << endl;
	std::cin >> menu;
	while (menu < 9 && menu > 0)
	{
		switch (menu)
		{
		case 1: 
		{
			std::cout << "Введите ваш полином. Пример: 5х^6yz^2+3yz^8" << std::endl;
			std::cin >> s;
			TPolinom temp1(s);
			mass[i] = temp1;
			i++;
			std::cout << "Меню:" << endl;
			std::cout << "1. Добавить новый полином" << endl;
			std::cout << "2. Удалить полином" << endl;
			std::cout << "3. Сумма 2-х полиномов" << endl;
			std::cout << "4. Разность 2-х полиномов" << endl;
			std::cout << "5. Умножение полинома на число" << endl;
			std::cout << "6. Произведение 2-х полиномов" << endl;
			std::cout << "7. Вывести полином" << endl;
			std::cout << "8. Вывести список доступных полиномов" << endl;
			std::cin >> menu;
			break; 
		}
		case 2:
			do {
				std::cout << "Введите номер полинома, который вы хотите удалить " << std::endl;
				std::cin >> a;
				string s = "0xyz";
				TPolinom Null(s);
				mass[a] = Null;
			} while (a < 0 || a > 10);
			std::cout << "Меню:" << endl;
			std::cout << "1. Добавить новый полином" << endl;
			std::cout << "2. Удалить полином" << endl;
			std::cout << "3. Сумма 2-х полиномов" << endl;
			std::cout << "4. Разность 2-х полиномов" << endl;
			std::cout << "5. Умножение полинома на число" << endl;
			std::cout << "6. Произведение 2-х полиномов" << endl;
			std::cout << "7. Вывести полином" << endl;
			std::cout << "8. Вывести список доступных полиномов" << endl;
			std::cin >> menu;
			break;
		case 3:
			do {
				std::cout << "Выберите полином для первого слагаемого" << std::endl;
				std::cin >> a;
			} while (a < 0 || a > 10);
			do {
				std::cout << "Выберите полином для второго слагаемого " << std::endl;
				std::cin >> b;
			} while (b < 0 || b > 10);
			do {
				std::cout << "Ввидите номер полинома, куда бы вы хотели записать результат. если вы не хотите сохранить результат,введите  '-1' " << std::endl;
				std::cin >> c;
			} while (c < -1 || c > 10);
			if (c == -1)
			{
				TPolinom res;
				res = mass[a] + mass[b];
				std::cout << res;
			}
			else if (c > -1)
				mass[c] = mass[a] + mass[b];
			std::cout << "Меню:" << endl;
			std::cout << "1. Добавить новый полином" << endl;
			std::cout << "2. Удалить полином" << endl;
			std::cout << "3. Сумма 2-х полиномов" << endl;
			std::cout << "4. Разность 2-х полиномов" << endl;
			std::cout << "5. Умножение полинома на число" << endl;
			std::cout << "6. Произведение 2-х полиномов" << endl;
			std::cout << "7. Вывести полином" << endl;
			std::cout << "8. Вывести список доступных полиномов" << endl;
			std::cin >> menu;
			break;
		case 4:
			do {
				std::cout << "Выберите полином, который является уменьшаемым " << std::endl;
				std::cin >> a;
			} while (a < 0 || a > 10);
			do {
				std::cout << "Выберите полином, который является вычитаемым " << std::endl;
				std::cin >> b;
			} while (b < 0 || b > 10);
			do {
				std::cout << "Ввидите номер полинома, куда бы вы хотели записать результат. если вы не хотите сохранить результат,введите  '-1' " << std::endl;
				std::cin >> c;
			} while (c < -1 || c >10);
			if (c == -1)
			{
				TPolinom res;
				res = mass[a] - mass[b];
				std::cout << res;
			}
			else if (c > -1)
				mass[c] = mass[a] - mass[b];
			std::cout << "Меню:" << endl;
			std::cout << "1. Добавить новый полином" << endl;
			std::cout << "2. Удалить полином" << endl;
			std::cout << "3. Сумма 2-х полиномов" << endl;
			std::cout << "4. Разность 2-х полиномов" << endl;
			std::cout << "5. Умножение полинома на число" << endl;
			std::cout << "6. Произведение 2-х полиномов" << endl;
			std::cout << "7. Вывести полином" << endl;
			std::cout << "8. Вывести список доступных полиномов" << endl;
			std::cin >> menu;
			break;
		case 5:
			double d;
			do {
				std::cout << "Выберите полином для первого множителя" << std::endl;
				std::cin >> a;
			} while (a < 0 || a > 10);
			std::cout << "Введите число, на которые Вы хотите умножить полином" << std::endl;
			std::cin >> d;
			do {
				std::cout << "Ввидите номер полинома, куда бы вы хотели записать результат. если вы не хотите сохранить результат,введите  '-1' " << std::endl;
				std::cin >> c;
			} while (c < -1 || c > 10);
			if (c == -1)
			{
				TPolinom res;
				res = mass[a] * d;
				std::cout << res;
			}
			else if (c > -1)
				mass[c] = mass[a] * d;
			std::cout << "Меню:" << endl;
			std::cout << "1. Добавить новый полином" << endl;
			std::cout << "2. Удалить полином" << endl;
			std::cout << "3. Сумма 2-х полиномов" << endl;
			std::cout << "4. Разность 2-х полиномов" << endl;
			std::cout << "5. Умножение полинома на число" << endl;
			std::cout << "6. Произведение 2-х полиномов" << endl;
			std::cout << "7. Вывести полином" << endl;
			std::cout << "8. Вывести список доступных полиномов" << endl;
			std::cin >> menu;
			break;
		case 6:
			do {
				std::cout << "Выберите полином для первого множителя" << std::endl;
				std::cin >> a;
			} while (a < 0 || a > 10);
			do {
				std::cout << "Выберите полином для второго множителя" << std::endl;
				std::cin >> b;
			} while (b < 0 || b > 10);
			do {
				std::cout << "Ввидите номер полинома, куда бы вы хотели записать результат. если вы не хотите сохранить результат,введите  '-1' " << std::endl;
				std::cin >> c;
			} while (c < -1 || c > 10);
			if (c == -1)
			{
				TPolinom res;
				res = mass[a] * mass[b];
				std::cout << res;
			}
			else if (c > -1)
				mass[c] = mass[a] * mass[b];
			std::cout << "Меню:" << endl;
			std::cout << "1. Добавить новый полином" << endl;
			std::cout << "2. Удалить полином" << endl;
			std::cout << "3. Сумма 2-х полиномов" << endl;
			std::cout << "4. Разность 2-х полиномов" << endl;
			std::cout << "5. Умножение полинома на число" << endl;
			std::cout << "6. Произведение 2-х полиномов" << endl;
			std::cout << "7. Вывести полином" << endl;
			std::cout << "8. Вывести список доступных полиномов" << endl;
			std::cin >> menu;
			break;
		case 7:
			do {
				std::cout << "Выберите полином, который вы хотите вывести " << std::endl;
				std::cin >> a;
				cout << mass[a];
			} while (a < 0 || a >= 10);
			std::cout << "Меню:" << endl;
			std::cout << "1. Добавить новый полином" << endl;
			std::cout << "2. Удалить полином" << endl;
			std::cout << "3. Сумма 2-х полиномов" << endl;
			std::cout << "4. Разность 2-х полиномов" << endl;
			std::cout << "5. Умножение полинома на число" << endl;
			std::cout << "6. Произведение 2-х полиномов" << endl;
			std::cout << "7. Вывести полином" << endl;
			std::cout << "8. Вывести список доступных полиномов" << endl;
			std::cin >> menu;
			break;
		case 8:
			do {
				std::cout << "Список доступных полиномов " << std::endl;
				string s = "0xyz";
				TPolinom Null(s);
				for (int j = 1; j < 10; j++)
					if (mass[j]!=Null)
						cout << j <<' '<< mass[j] << '\n';
				break;
			} while (a < 0 || a >= 10);
			std::cout << "Меню:" << endl;
			std::cout << "1. Добавить новый полином" << endl;
			std::cout << "2. Удалить полином" << endl;
			std::cout << "3. Сумма 2-х полиномов" << endl;
			std::cout << "4. Разность 2-х полиномов" << endl;
			std::cout << "5. Произведение 2-х полиномов" << endl;
			std::cout << "6. Умножение полинома на число" << endl;
			std::cout << "7. Вывести полином" << endl;
			std::cout << "8. Вывести список доступных полиномов" << endl;
			std::cin >> menu;
			break;
		default:exit(1);
		}
	}

	return 0;
}*/
int main()
{
	int c = 0;
	int menu;
	int SIZE;
	string a;
	setlocale(LC_ALL, "Russian");
	cout << "Создание таблиц,введите размер ваших таблиц:" << endl;
	cin >> SIZE;
	UnSortTab <string, TPolinom> A(SIZE);
	SortTab<string, TPolinom> B(SIZE);
	HashTab <string, TPolinom> C(SIZE);


	while (c != -1)
	{
		system("cls");
		cout << "Выберите операцию:" << endl;
		cout << "1.Ввод элемента" << endl;
		cout << "2.Удаление элемента" << endl;
		cout << "3.Поиск элемента" << endl;
		cout << "4.Печать таблиц" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			string str;
			cout << "Введите ваш полином:" << endl;
			cin >> str;
			TPolinom a(str);
			try
			{
				A.Insert(str, a);
			}
			catch (...)
			{
				cout << "Повторный ключ" << endl;
			}
			try
			{
				B.Insert(str, a);
			}
			catch (...)
			{
				cout << "Повторный ключ" << endl;
			}
			try
			{
				C.Insert(str, a);
			}
			catch (...)
			{
				cout << "Повторный ключ" << endl;
			}
			cout << "Несортерованная :" << endl;
			cout << A << endl;
			cout << "Сортированная :" << endl;
			cout << B << endl;
			cout << "Hash :" << endl;
			cout << C << endl;
			break;
		}
		case 2:
		{
			string str;
			cout << "Введите ваш полином:" << endl;
			cin >> str;
			TPolinom a(str);
			A.Delete(str);
			B.Delete(str);
			C.Delete(str);
			cout << "Несортированная :" << endl;
			cout << A << endl;
			cout << "Сортированная :" << endl;
			cout << B << endl;
			cout << "Hash :" << endl;
			cout << C << endl;
			break;
		}
		case 3:
		{
			string str;
			cout << "Введите ваш полином" << endl;
			cin >> str;
			TPolinom a(str);
			try
			{
				if (A.Search(str) != nullptr)
					cout << "Найден: " << A.Search(str)->Data << endl;
				else
					cout << "Not found!" << endl;
			}
			catch (...) { cout << "Не найден" << endl; }
			try
			{
				if (B.Search(str) != nullptr)
					cout << "Найден: " << B.Search(str)->Data << endl;
				else
					cout << "Not found!" << endl;
			}
			catch (...) { cout << "Не найден" << endl; }
			try
			{
				if (C.Search(str) != nullptr)
					cout << "Найден: " << C.Search(str)->Data << endl;
				else
					cout << "Not found!" << endl;
			}
			catch (...) { cout << "Не найден" << endl; }
			break;
		}
		case 4:
		{
			cout << "Несортированная :" << endl;
			cout << A << endl;
			cout << "Сортированная :" << endl;
			cout << B << endl;
			cout << "Hash :" << endl;
			cout << C << endl;
			break;
		}
		default:
		{
			cout << "Ошибка, попробуйте снова" << endl;
			break;
		}
		}
		cout << "Для продолжения работы введите '1'" << endl;
		cout << "Для выхода введите  '- 1' " << endl;
		cin >> c;
	}
	return 0;
}
