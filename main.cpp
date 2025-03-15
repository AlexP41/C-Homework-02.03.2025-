/*
������ � �������
================

� ��� ����� ��������. ������� �������� �� �� 3 ����� ����� ����� �����, ��� � ������� ���� ���������� ����� ���� ��������.
���� ��� �������� ��������� �� ����, �� �� �������� �� ������.

��������� ������: ��������� �� ����������� GitHub

P.S.: �� ��������� �� ������� �� ������, ����� �� ��� ������
*/

/*
������ � �������
================

��������� ������: ��������� �� GitHub
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
		cout << "\033[033m����(��� �������� ��������): \n";
		cout << "1 - �������� �1\n";
		cout << "2 - �������� �2\n";
		cout << "3 - �������� �3\n";
		cout << "4 - �����\033[0m\n";
		cout << endl;
		while (true)
		{
			cout << endl;
			cout << "������ ��� ����: ";
			cin >> userChoice;

			if (cin.fail()) {
				cout << "\033[031m �������! ���� �����, ������ �����.\033[0m\n";
				cin.clear();
				cin.ignore(1000, '\n');
				continue;
			}

			if (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4)
			{
				cout << "\033[031m �������! ���� �����, ������ ����� 1, 2, 3 ��� 4.\033[0m\n";
				continue;
			}

			break;

		}

		switch (userChoice)
		{
		case 1:
#pragma region Exercise 1


			/*
			�1
				� ����, ���������� ����� � ����� �����. �������� � ����� ���� �����, �� ����������� �� ����� � ��� �
			*/

			exercise1();

#pragma endregion 
			
			break;


		case 2:
#pragma region Exercise 2

			/*
			�2
				� ����, ���������� ����� � ��� �����. �� ���� ����� ����� ����� �������� � ������ ����, � ������ - � ����� ����.
				������� ��������� ����� ����������.
			*/

			exercise2();



#pragma endregion 

			
			break;

		case 3:
#pragma region Exercise 3

			exercise3();


			/*
			�3
				� ��� �����, ���������� ����� � ����� �������. ���������� � ����������� ������� ��������� �������� ������� ����� � ������,
				� �������� ������� ����� - � ������. ��������������� ��������� ����
			*/
			break;


		case 4:
			cout << "�����...\n";
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
		cout << "���� �� ��������." << endl;
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

