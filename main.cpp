#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	int num1, num2, temp;
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

	for (size_t i = num1; i < num2 + 1; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	cout << endl;
	cout << "Even numbers:\t";
	for (size_t i = num1; i < num2+1; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << "\t";
		}
	}
	cout << endl;
	cout << "Odd numbers:\t";
	for (size_t i = num1; i < num2 + 1; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << "\t";
		}
	}
	cout << endl;
	
	cout << "Numbers multiple by seven:\t";
	for (int i = num1; i < num2 + 1; i++)
	{
		if ( i != -858993460 & i % 7 == 0) // -858993460 
		{
			cout << i << "\t";
		}
	}

	return 0;
}