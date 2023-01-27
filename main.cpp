#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	int num1, num2, temp, sum = 0;
	const int size = 1000;
	int evens[size];
	int odds[size];
	int seven[size];
	cout << "Enter first number-> ";
	cin >> num1;
	cout << "Enter second number-> ";
	cin >> num2;
	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = 0, j = num1; j < num2; i++)
	{
		if (j % 2 == 0)
		{
			evens[i] = j;
			j++;
		}
		if (j % 2 != 0)
		{
			odds[i] = j;
			j++;
		}
		if (j % 7 == 0)
		{
			seven[i] = j;
			j++;
		}
	}

	cout << "----------------------------------------------------" << endl;
	cout << "Even numbers: ";
	for (int i = 0; i < num2 + 1; i++)
	{
		if (evens[i] != -858993460)
		{
			cout << evens[i] << "  ";

		}
	}
	cout << endl;
	cout << "Odd numbers: ";
	for (int i = 0; i < num2 + 1; i++)
	{
		if (odds[i] != -858993460)
		{
			cout << odds[i] << "  ";

		}
	}
	cout << endl;
	cout << "Numbers multiple by seven: ";
	for (int i = 0; i < num2 + 1; i++)
	{
		if (seven[i] != -858993460) // -858993460 
		{
			cout << seven[i] << "  ";

		}
	}

	return 0;
}