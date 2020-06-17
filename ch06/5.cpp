/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-17 17:50:50
 * @LastEditTime: 2020-06-17 18:06:17
 */

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    double money, tax;
    while (cin >> money && money >= 0) // 因为 money 是 double，如果 cin 了字母会跳出循环
    {
        if (money <= 5000)
            tax = 0;
        else if (money <= 15000)
            tax = (money - 5000) * 0.1;
        else if (money <= 35000)
            tax = (money - 15000) * 0.15 + 10000 * 0.1;
        else
            tax = (money - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
        cout << "Your tax is " << tax << endl;
    }
    cout << "Byebye!" << endl;
    return 0;
}