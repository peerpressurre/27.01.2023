#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <chrono>
#include "windows.h"

using namespace std;
using namespace std::chrono;

int main()
{
    srand(time(0));
    unsigned short user_number, rand_number = rand() % 500;
    unsigned long long try_count = 0;
    cout << rand_number << endl;
    cout << "*Press 0 to quit" << endl;
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
        cout << "Guess a number[0 - 500]->";
        cin >> user_number;
        if (user_number == 0)
        {
            break;
        }
        else if (user_number > 500 || user_number < 0)
        {
            cout << "Number out of range! Try again" << endl;
            try_count--;
            system("pause");
        }
        else if (user_number != rand_number)
        {
            (user_number > rand_number) ? cout << "Too much" << endl : cout << "Too little" << endl;

        }
        else if (user_number == rand_number)
        {
            system("cls");
            end = chrono::system_clock::now();

            auto elapsed_seconds = chrono::duration_cast<chrono::seconds>(end - start).count();


            cout << "#>--------<WIN>-----------#" << endl;
            cout << "| Tries taken: " << try_count << endl;
            cout << "| Time taken: " << elapsed_seconds << " sec" << std::endl;
            cout << "#>------------------------#" << endl;
            exit(0);
        }
    } while (true);
    return 0;
}