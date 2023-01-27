#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number-> ";
	cin >> num;
	for (size_t i = 0; i < num + 1; i++)
	{
		cout << i << "  ";
	}
	return 0;
}