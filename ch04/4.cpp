/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 17:02:09
 * @LastEditTime: 2020-06-15 17:02:52
 */
#include <iostream>
using namespace std;
#include <string>
int main()
{
    string first_name, last_name, full_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    full_name = first_name + ", " + last_name;
    cout << "Here's the information in a single string: " << full_name << endl;
    return 0;
}