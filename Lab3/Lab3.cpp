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
#include <sstream>
#include <math.h>

double nthRoot(int A, int N)
{
    // initially guessing a random number between
    // 0 and 9
    double xPre = rand() % 10;
    //  smaller eps, denotes more accuracy
    double eps = 1e-3;
    // initializing difference between two
    // roots by INT_MAX
    double delX = INT_MAX;
    //  xK denotes current value of x
    double xK;
    //  loop until we reach desired accuracy
    while (delX > eps)
    {
        //  calculating current value from previous
        // value by newton's method
        xK = ((N - 1.0) * xPre +
            (double)A / pow(xPre, N - 1)) / (double)N;
        delX = abs(xK - xPre);
        xPre = xK;
    }
    return xK;
}

using namespace std;
int main() {
    fstream file;
    file.open("../files/f.txt", ios::in); 
    //open a file to perform read operation using file object
    if (file.is_open()) {   
        //checking whether the file is open
        int count = 0;
        int product = 1;
        int sum = 0;
        string line;
        int odd = 0;
        int even = 0;
        int k = 0;
        cout << "In your file are the next numbers:" << endl;
        while (getline(file, line)) { 
            //read data from file object and put it into string.
            count++;
        }
        file.close();

        cout << "Count of numbers is: " << count << endl;
        int* numbers = new int[count];
        //dinamic array with integer numbers
        file.open("../files/f.txt", ios::in);
        string line_2;
        // type of the line from string to int
        while (getline(file, line_2)) {
            numbers[k] = stoi(line_2);
            k++;
        }
        file.close(); //close the file object.
        for (int i = 0; i < count; i++) {
            if (numbers[i] % 2 == 0) {
                product = product * numbers[i];
                even++;
            }
            else {
                sum = sum + numbers[i];
                odd++;
            }
        }
        
        // Calc arithmetic mean of odd numbers
        double sum_a = (double)sum / odd;
        // Calc geometric mean of even numbers
        double product_g = (double)nthRoot(product, even);
        
        file.open("../files/arithmetic.txt", ios::out); 
        if (file.is_open()) {
            file << sum_a;   //inserting text
            file.close();    //close the file object
        }
        file.open("../files/geometric.txt", ios::out); 
        if (file.is_open()) {
            file << product_g;   //inserting geometric
            file.close();    //close the file object
        }

        delete[] numbers;
    }
}