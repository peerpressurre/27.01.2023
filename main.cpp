#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	int num;
	cout << "-> ";
	cin >> num;
	int sum = num;
	for (int i = num; i != 0;)
	{
		cout << "-> ";
		cin >> i;
		sum += i;
	}

	cout << "Sum = " << sum << endl;

	return 0;
}