#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	/*int num;
	cout << "-> ";
	cin >> num;*/
	int sum = 0;
	cout << "Enter numbers: " << endl;
	for (int i = 1; i != 0;)
	{
		cout << "-> ";
		cin >> i;
		sum += i;
	}

	cout << "Sum = " << sum << endl;

	return 0;
}