/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 16:53:43
 * @LastEditTime: 2020-06-16 17:03:30
 */
#include <iostream>
#include <array>
using namespace std;
const int ArrSize = 16;
int main()
{
    array<long double, ArrSize> factorials;
    factorials[0] = factorials[1] = 1;
    for (int i = 2; i < ArrSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i < ArrSize; i++)
    // for (long double x : factorials) // i not defined
    {
        cout << i << "! = " << factorials[i] << endl;
    }
    return 0;
}