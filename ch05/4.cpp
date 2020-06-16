/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 17:09:44
 * @LastEditTime: 2020-06-16 17:14:34
 */

#include <iostream>
using namespace std;

int main()
{
    double x = 100, y = 100;
    int i = 0;
    while (x >= y)
    {
        i++;
        x += 100 * 0.1;
        y += y * 0.05;
    }
    cout << i << " years later, Cleo = " << y << ", Daphne = " << x << endl;
    return 0;
}