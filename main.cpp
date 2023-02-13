#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    srand(time(0));
    unsigned short user_number, rand_number = rand() % 500;
    unsigned long long try_count = 0;
    time_t start, end, total;
    cout << rand_number << endl;
    do {
        if (try_count == 0)
        {
            //start = time(0); 
            start = system_clock::to_time_t(system_clock::now());
        }
        // convert now to string form 
        try_count++;
        cout << "Try: " << try_count << endl;
        cout << "number[0 - 500]->";
        cin >> user_number;
        if (user_number > 500 || user_number < 0)
        {
            cout << "Incorrect number!" << endl;
            try_count--;
            system("pause");
        }
        else if (user_number != rand_number)
        {
            (user_number > rand_number) ? cout << "User number more then rand number" << endl : cout << "User number less then rand number";
        }
        else if (user_number == rand_number)
        {
            system("cls");
            end = system_clock::to_time_t(system_clock::now());
            tm* s_tm = localtime(&start);
            tm* e_tm = localtime(&end);
            tm* t_tm = localtime(&total);
            std::chrono::duration<double> elapsed_seconds = end - start;
            std::cout << "Elapsed Time: " << elapsed_seconds.count() << " sec" << std::endl;
            cout << "#>--------<WIN>-----------#" << endl;
            cout << "| Try count =" << try_count << endl;
            cout << "| Time start =" << ctime(&start) << endl;
            cout << "| Time end =" << ctime(&end) << endl;
            cout << "| Total time =" << ctime(&total) << endl;
            cout << "#>------------------------#" << endl;
            exit(0);
        }
    } while (true);
    return 0;
}