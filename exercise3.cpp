/*
	�3
		� ��� �����, ���������� ����� � ����� �������. ���������� � ����������� ������� ��������� �������� ������� ����� � ������,
		� �������� ������� ����� - � ������. ��������������� ��������� ����
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
    �� ����� �� ������� ������.
    ���������, ���� ���� �� while (file2.get(ch)) ����� �� ���� �����, � ������ �������������� ��������� eof (����� �����), � ��� ������� �� ������.
    clear() ����� �� �������� (eofbit, failbit, ����), ��� ����� ����� ���� ��������� � �������.
    */
    file2.clear(); 
    /*
    �� ������� �������� ������� �� ������� ����� (0 � ������� � �������).
    seekg ������: "seek get", ����� ���������� �������� ������� (get pointer).
    */
    file2.seekg(0); // �� �������
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

    cout << "����� ������ ��������� ������." << endl;



	return 0;
}