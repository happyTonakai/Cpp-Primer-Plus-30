/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 12:02:18
 * @LastEditTime: 2020-06-15 16:22:53
 */
#include <iostream>
using namespace std;
int main()
{
    char first_name[20];
    char last_name[20];
    char grade;
    int age;
    cout << "What is your first name? ";
    cin.get(first_name, 20);
    cout << "What is your last name? ";
    cin >> last_name;
    cout << "what letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(int(grade) + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}