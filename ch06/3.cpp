/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-17 17:34:31
 * @LastEditTime: 2020-06-17 17:48:15
 */

#include <iostream>
using namespace std;
int main()
{
    cout << "Please enter one of the following choices:\n";
    cout << "a) apple\tb) banana\nc) cat\t\td) dog\n";
    char opt;
    while (cin >> opt)
    {
        if (opt == 'a' or opt == 'b' or opt == 'c' or opt == 'd')
            break;
        else
            cout << "Please enter a valid option." << endl;
    }
    switch (opt)
    {
    case 'a':
        cout << "Here is your apple.";
        break;
    case 'b':
        cout << "Here is your banana.";
        break;
    case 'c':
        cout << "Here is your cat.";
        break;
    case 'd':
        cout << "Here is your dog.";
    }
    return 0;
}