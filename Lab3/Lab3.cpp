// ������� 10, ������� 1:
// ��� ���� f. ������� ��� �����, ������� � 
// ������ �� ��� ������� �������������� ���� ������ �����, � �� ������ � ������� �������������� ���� �������� �����.

// ������� 10, ������� 2:
//������������ ������ �� �����, ���������� �������� �� ������������ ������� � ��������.
//����������� ��� �������� ���� : �������� �������, ����, ����������, ���������� �������(2 - 5).
//�������� ���������, ������� �������� ����������� ���������� � ����� � ������� �� ����� :
//-�������� �������, ������� �������� ����� �� 1 �� 3 ���;
//-��������� ����� ������� ������� � �� ��������;
//-�������� �������, ������� �� ��������� �� ��������� X ���.� �������� ������� � �������� �� A �� B ���.
//�������� A, B, X �������� � ����������.

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;
int main() {
    fstream file;
    int count = 0;
    int num = 1;
    int i = 0;
    //string S = "-66";
    //int N = stoi(S);
    //cout << N << endl;

    file.open("../files/f.txt", ios::in); //open a file to perform read operation using file object
    if (file.is_open()) {   //checking whether the file is open
        string line;
        while (getline(file, line)) { //read data from file object and put it into string.
            count++; //12
        }
        string line_2;
        file.close();
        int* numbers = new int(count);
        //int count_array = count;
        file.open("../files/f.txt", ios::in);

        int k = 0;
        while (getline(file, line_2)) {
            num = stoi(line_2);
            numbers[k] = i;
            cout << i << endl;
            k++;
            i++;
        }
        file.close(); //close the file object.
        ////for (int i = 0; i < count_array; i++) {
        ////    cout << numbers[i] << endl;
        ////}
        //delete[] numbers;
    }
    /*newfile.open("../files/f.txt", ios::out); // open a file to perform write operation using file object
    if (newfile.is_open()) //checking whether the file is open
    {
        newfile << "10\n10\n";   //inserting text
        newfile.close();    //close the file object
    }
    */
}