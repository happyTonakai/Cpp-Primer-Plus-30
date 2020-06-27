/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-27 11:23:06
 * @LastEditTime: 2020-06-27 11:27:01
 */
// factorials
#include <iostream>
using namespace std;
int factorials(int);
int main()
{
    int n;
    while (cout << "Enter a number: " && cin >> n)
    {
        cout << n << "! = " << factorials(n) << endl;
    }
    return 0;
}

int factorials(int n)
{
    if (n <= 2)
        return n;
    else
        return factorials(n - 1) * n;
}