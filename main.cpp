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
    cout << rand_number << endl;
    std::chrono::system_clock::time_point start, end, total;
    do {
        if (try_count == 0)
        {
            //start = time(0); 
            start = chrono::system_clock::now();
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
            end = chrono::system_clock::now();

            auto elapsed_seconds = chrono::duration_cast<chrono::seconds>(end - start).count();

            cout << "Elapsed Time: " << elapsed_seconds << " sec" << std::endl;
            cout << "#>--------<WIN>-----------#" << endl;
            cout << "| Try count = " << try_count << endl;
            cout << "| Time start = " << std::chrono::system_clock::to_time_t(start) << endl;
            cout << "| Time end = " << std::chrono::system_clock::to_time_t(end) << endl;
            cout << "| Total time = " << std::chrono::system_clock::to_time_t(total) << endl;
            cout << "#>------------------------#" << endl;
            exit(0);
        }
    } while (true);
    return 0;
}