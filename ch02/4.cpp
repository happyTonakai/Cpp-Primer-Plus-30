/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-14 20:49:16
 * @LastEditTime: 2020-06-14 20:52:16
 */
#include <iostream>
using namespace std;
int age2month(int); // function prototype
int main()
{
    int age, month;
    cout << "Enter your age: ";
    cin >> age;
    month = age2month(age);
    cout << age << " years = " << month << " months.\n";
    return 0;
}

int age2month(int age)
{
    return 12 * age;
}