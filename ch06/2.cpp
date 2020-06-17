/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-17 17:20:18
 * @LastEditTime: 2020-06-17 17:33:01
 */
#include <iostream>
using namespace std;
int main()
{
    double donation[10];
    double d, sum = 0;
    int i;
    for (i = 0; i < 10 && cin >> d; i++)
        donation[i] = d;

    for (int j = 0; j < i + 1; j++)
        sum += donation[j];

    double avg = sum / (i + 1);
    cout << "The average of those numbers is " << avg << endl
         << "And the following numbers are greater than the average: ";

    for (int j = 0; j < i + 1; j++)
        if (donation[j] > avg)
            cout << donation[j] << ' ';
    cout << endl;
    return 0;
}