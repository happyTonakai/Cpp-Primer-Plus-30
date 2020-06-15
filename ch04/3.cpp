/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 16:52:15
 * @LastEditTime: 2020-06-15 17:00:14
 */
#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char first_name[20], last_name[20], full_name[40];
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    strcpy(full_name, first_name);
    strcat(full_name, ", ");
    strcat(full_name, last_name);
    cout << "Here's the information in a single string: " << full_name << endl;
    return 0;
}