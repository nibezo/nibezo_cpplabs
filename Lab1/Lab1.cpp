//–еализовать класс дл€ хранени€ двоичных чисел.
//–еализовать метод правильность перевода числа из двоичной системы счислени€ в семеричную.
//ѕроверить правильность перевода числа из двоичной системы счислени€ в семеричную.


#include <iostream>
#include <string>
using namespace std;

class binary
{
public:
	// Store binary number
	void numberStorage()
	{

	}
	// Convert number in base 2 to base 7
	void binaryToSeptenary(int num, int rem, int sum, int i, int remm, int sum2, int n) {
		while (num > 0)
		{
			rem = num % 10;
			sum = sum + (rem * i);
			num = num / 10;
			i = i * 2;
		}
		cout << "Your decimal number is " << sum << endl;
		while (sum > 0)
		{
			remm = sum % 7;
			sum2 = sum2 + (remm * n);
			sum = sum / 7;
			n = n * 10;
		}
		cout << "Your number in base 7 is " << sum2 << endl;
	}
	// Check the convertation
	void checkConvertation() {

	}
};

void main()
{
	int binaryNumber;
	int number;
	string answer;
	binary binaryStorage;
	cout << "Do you want to add a new binary number? y/n" << endl;
	cin >> answer;
	bool check = true;
	while (check == true) {
		if (answer == "y" || answer == "Y") {
			check = false;
		}

		else if (answer == "n" || answer == "N") {
			exit(0);
		}

		else {
			cout << "Enter a correct answer:" << endl;
			cin >> answer;
		}
	}
	cout << "Enter the binary number: " << endl;
	cin >> binaryNumber;
	binaryStorage.binaryToSeptenary(binaryNumber, 0, 0, 1, 0, 0, 1);
}