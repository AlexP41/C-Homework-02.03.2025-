/*
	№3
		Є два файли, елементами якого є окремі символи. Переписати зі збереженням порядку слідування елементи першого файлу в другий,
		а елементи другого файлу - у перший. Використовувати допоміжний файл
*/

#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

int exercise3() {
    ifstream file1("Ex3-file1.txt");
    ifstream file2("Ex3-file2.txt");
    ofstream tempFile("Ex3-temp.txt");

    char ch;
    while (file1.get(ch)) {
        tempFile.put(ch);
    }

    file1.close();
    tempFile.close();

    /*
    Це скидає всі помилки потоку.
    Наприклад, після того як while (file2.get(ch)) дійшов до кінця файлу, у потоці встановлюється прапорець eof (кінець файлу), і далі читання не працює.
    clear() очищає ці прапорці (eofbit, failbit, тощо), щоб знову можна було працювати з потоком.
    */
    file2.clear(); 
    /*
    Це переміщує вказівник читання на початок файлу (0 — позиція з початку).
    seekg означає: "seek get", тобто перемістити вказівник читання (get pointer).
    */
    file2.seekg(0); // на початок
    ofstream outFile1("Ex3-file1.txt"); 
    while (file2.get(ch)) {
        outFile1.put(ch);
    }

    file2.close();
    outFile1.close();

    
    ifstream inTemp("Ex3-temp.txt");
    ofstream outFile2("Ex3-file2.txt");
    while (inTemp.get(ch)) {
        outFile2.put(ch);
    }

    inTemp.close();
    outFile2.close();

    cout << "Файли успішно обмінялись вмістом." << endl;



	return 0;
}