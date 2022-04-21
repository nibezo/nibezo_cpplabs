// Вариант 10, задание 1:
// Дан файл f. Создать два файла, записав в 
// первый из них среднее геометрическое всех четных чисел, а во второй – среднее арифметическое всех нечетных чисел.

// Вариант 10, задание 2:
//Сформировать массив на диске, содержащий сведения об ассортименте игрушек в магазине.
//Структурный тип содержит поля : название игрушки, цена, количество, возрастные границы(2 - 5).
//Написать программу, которая выбирает необходимую информацию с диска и выводит на экран :
//-название игрушек, которые подходят детям от 1 до 3 лет;
//-стоимость самой дорогой игрушки и ее название;
//-название игрушки, которая по стоимости не превышает X руб.и подходит ребенку в возрасте от A до B лет.
//Значения A, B, X вводятся с клавиатуры.

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