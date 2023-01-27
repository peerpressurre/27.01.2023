#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	int num1, num2, temp, sum = 0;
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

	for (int i = num1; i < num2 + 1; i++)
	{
		sum += i;
	}

	cout << "Sum = " << sum << endl;

	return 0;
}
