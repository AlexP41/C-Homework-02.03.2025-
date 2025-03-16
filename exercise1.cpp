/*
�1
	� ����, ���������� ����� � ����� �����. �������� � ����� ���� �����, �� ����������� �� ����� � ��� �
*/

#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

int exercise1() {
    ifstream inputFile("Ex1-data.txt");
    ofstream outputFile("Ex1-result.txt");

    if (!inputFile) {
        cout << "Cannot open input file!" << endl;
        return 1;
    }

    if (!outputFile) {
        cout << "Cannot open output file!" << endl;
        return 1;
    }

    string word;
    while (inputFile >> word) {
        char firstChar = tolower(word[0]);  

        // ��������: ����� '�' ��� '�' (�������� �� ��������)
        if (firstChar == 'a' || firstChar == 'o' || firstChar == '�' || firstChar == '�') {
            outputFile << word << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "Words starting with 'a' or 'o' written to Ex1-result.txt." << endl;
    return 0;
}