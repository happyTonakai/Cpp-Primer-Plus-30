/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 16:23:36
 * @LastEditTime: 2020-06-15 16:48:34
 */
#include <iostream>
using namespace std;
#include <string>
int main()
{
    string name;
    string dessert;
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorate dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0;
}