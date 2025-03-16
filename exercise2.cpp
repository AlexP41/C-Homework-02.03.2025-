/*
	�2
		� ����, ���������� ����� � ��� �����. �� ���� ����� ����� ����� �������� � ������ ����, � ������ - � ����� ����.
		������� ��������� ����� ����������.
*/

#include <iostream>
#include <fstream>
#include <string>
#include "main.h"


using namespace std;

int exercise2() {
    ifstream inFile("Ex2-data.txt");
    ofstream evenFile("Ex2-even.txt");
    ofstream oddFile("Ex2-odd.txt");

    int number;

    if (!inFile) {
        cout << "�� ������� ������� ���� Ex2-data.txt" << endl;
        return 1;
    }

    while (inFile >> number) {
        if (number % 2 == 0) {
            evenFile << number << " ";
        }
        else {
            oddFile << number << " ";
        }
    }

    inFile.close();
    evenFile.close();
    oddFile.close();

    cout << "��� ������ ������� � ����� Ex2-even.txt �� Ex2-odd.txt." << endl;



	return 0;
}