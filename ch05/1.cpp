/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 16:50:05
 * @LastEditTime: 2020-06-16 16:53:08
 */
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}