/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 10:49:37
 * @LastEditTime: 2020-06-15 10:54:32
 */

#include <iostream>
using namespace std;
int main()
{
    int mile, gallon;
    cout << "Enter your driving distance in mile: ";
    cin >> mile;
    cout << "Enter your patrol usage in gallon: ";
    cin >> gallon;
    cout << "Your oil consumption is " << (float)mile / gallon << " miles per gallon.\n";
    return 0;
}