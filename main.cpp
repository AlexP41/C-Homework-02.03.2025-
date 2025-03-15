/*
РОБОТА З ФАЙЛАМИ
================

Є три окремі завдання. Потрібно розділити їх на 3 окремі файли таким чином, щоб у кожному файлі зберігалося тільки одне завдання.
Поділ слід виконати аналогічно до того, як це робилося на занятті.

Результат роботи: посилання на репозитарий GitHub

P.S.: не забувайте за питання до іспиту, майте на них відповіді
*/

/*
РОБОТА З ФАЙЛАМИ
================

Результат роботи: посилання на GitHub
*/

#include <iostream>
#include <fstream>



#include "exercise1.h"
#include "exercise2.h"
#include "exercise3.h"
#include "main.h"


using namespace std;



#pragma region Functions prototypes 

#pragma	region For Ex 1




#pragma	endregion


#pragma	region For Ex 2




#pragma	endregion

#pragma	region For Ex 3



#pragma	endregion

#pragma endregion


int main()
{

	system("chcp 1251>null");

	int userChoice;
	bool menuOn = true;

	while (menuOn) {
		cout << endl;
		cout << "\033[033mМеню(яке завдання виконати): \n";
		cout << "1 - Завдання №1\n";
		cout << "2 - Завдання №2\n";
		cout << "3 - Завдання №3\n";
		cout << "4 - Вихід\033[0m\n";
		cout << endl;
		while (true)
		{
			cout << endl;
			cout << "Введіть ваш вибір: ";
			cin >> userChoice;

			if (cin.fail()) {
				cout << "\033[031m Помилка! Будь ласка, введіть число.\033[0m\n";
				cin.clear();
				cin.ignore(1000, '\n');
				continue;
			}

			if (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4)
			{
				cout << "\033[031m Помилка! Будь ласка, введіть число 1, 2, 3 або 4.\033[0m\n";
				continue;
			}

			break;

		}

		switch (userChoice)
		{
		case 1:
#pragma region Exercise 1


			/*
			№1
				Є файл, елементами якого є окремі слова. Записати в інший файл слова, що починаються на букву о або а
			*/

			exercise1();

#pragma endregion 
			
			break;


		case 2:
#pragma region Exercise 2

			/*
			№2
				Є файл, елементами якого є цілі числа. Усі парні числа цього файлу записати в другий файл, а непарні - у третій файл.
				Порядок слідування чисел зберігається.
			*/

			exercise2();



#pragma endregion 

			
			break;

		case 3:
#pragma region Exercise 3

			exercise3();


			/*
			№3
				Є два файли, елементами якого є окремі символи. Переписати зі збереженням порядку слідування елементи першого файлу в другий,
				а елементи другого файлу - у перший. Використовувати допоміжний файл
			*/
			break;


		case 4:
			cout << "Вихід...\n";
			menuOn = false;
			break;



#pragma endregion 

		default:
			break;
		}


	}

	system("chcp 1251>null");




	return 0;
}


#pragma region Functions Region


#pragma	region Functions for Ex 1



void resetFile(string& fileName)
{
	ofstream file1(fileName, ios::out);

	if (!file1)
	{
		cout << "Файл не знайдено." << endl;
		return;
	}

	file1 << "";
	file1.close();
}


#pragma	endregion


#pragma	region Functions for Ex 2




#pragma	endregion


#pragma	region Functions for Ex 3



#pragma	endregion


#pragma endregion

