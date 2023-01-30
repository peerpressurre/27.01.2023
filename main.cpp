#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	int num, counter = 0;
	srand(time(0));
	num = rand() % 10;

	for (size_t i = 0; i != num;)
	{
		cout << "-> ";
		cin >> i;
		if (i < num && i != 0)
		{
			cout << "Too little" << endl;
		}
		if (i > num && i != 0)
		{
			cout << "Too much" << endl;
		}
		if (i == 0)
		{
			cout << "Exit..";
			exit;
		}
		counter += 1;
	}
	cout << "Congratulations! You guessed the number!" << endl;
	cout << "It took you " << counter << " takes";

 