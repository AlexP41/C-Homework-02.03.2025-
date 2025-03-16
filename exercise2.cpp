/*
	№2
		Є файл, елементами якого є цілі числа. Усі парні числа цього файлу записати в другий файл, а непарні - у третій файл.
		Порядок слідування чисел зберігається.
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
        cout << "Не вдалося відкрити файл Ex2-data.txt" << endl;
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

    cout << "Дані успішно записані у файли Ex2-even.txt та Ex2-odd.txt." << endl;



	return 0;
}