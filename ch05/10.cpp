/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 19:01:56
 * @LastEditTime: 2020-06-16 19:06:31
 */
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
            cout << ".";
        for (int k = 0; k <= i; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}