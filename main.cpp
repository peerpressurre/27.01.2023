#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
	int u_num, c_num, counter = 0;
	time_t start, end, total;
	srand(time(0));
	c_num = rand() % 10;
	cout << c_num << endl; 
	do
	{
		if (counter == 0)
		{
			start = system_clock::to_time_t(system_clock::now());
		}

		counter++;
		cout << counter << "try" << endl;
		cout << "[between 0 and 500]" << endl;
		cout << "Your guess-> ";
		cin >> u_num;
		if (u_num < 0 || u_num > 500)
		{
			cout << "Wrong range, try again" << endl;
		}
		else if (u_num != c_num)
		{
			(u_num > c_num) ? cout << "Too big" << endl : cout << "Too small" << endl;
		}
		else if (u_num == c_num)
		{
			system("cls");
			end = system_clock::to_time_t(system_clock::now());

			tm* s_tm = localtime(&start);
			tm* e_tm = localtime(&end);
			tm* t_tm = localtime(&total);

			/*std::chrono::duration<double, std::micro> elapsed_seconds = ((end) - start);*/
			std::chrono::duration<double, std::milli> elapsed_seconds = end - start;
			/*auto int_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
			auto elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);*/
			std::cout << "Elapsed Time: " << elapsed_seconds.count() << " sec" << std::endl;


		}
	} while (true);
	

	return 0;
}