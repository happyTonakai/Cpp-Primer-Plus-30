/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 17:03:46
 * @LastEditTime: 2020-06-16 17:09:13
 */

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    do
    {
        cin >> n;
        sum += n;
        cout << "sum = " << sum << endl;
    } while (n != 0);

    return 0;
}