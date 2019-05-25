#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int number1, number2;
	char again, choice;
	bool g = true;
	
	while (g == true)
	{
	
	cout << " MENU: " << endl;
	cout << "1. Add " << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;
	
	cout << " Enter your choice: " << endl;
	cin >> choice;
	cout << " Enter two numbers: " << endl;
	cout << "1. " << endl;
	cin >> number1;
	cout << "2. " << endl; 
	cin >> number2;
	
	switch (choice)
	{
		case '1':
				cout << "Result: " << number1 + number2;
				break;
		case '2':
				cout << "Result: " << number1 - number2;
				break;
		case '3':
				cout << "Result: " << number1 * number2;
				break;
		case '4':
				cout << "Result: " << number1 / number2;
				break;
		case '5':
				cout << "Result: " << number1 % number2;
				break;
	}

	cout << " Continue? [y]es or [n]o? "; cin >> again;
	if (again == 'y') 
	{
		g = true;
	}
	else if (again == 'n')
	{
		g = false;
	}
}
	_getch ();
	return 0;
}
