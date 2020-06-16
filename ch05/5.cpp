/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 17:16:40
 * @LastEditTime: 2020-06-16 17:40:35
 */

#include <iostream>
using namespace std;
const int ArrSize = 3;
int main()
{
    char *months[ArrSize] = {
        "Jan", "Feb", "Mar" //, "Apr", "May", "Jun", "July", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int sales[ArrSize], sum = 0;
    for (int i = 0; i < ArrSize; i++)
    {
        cout << months[i] << ": ";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "Total sales of the year is " << sum << endl;
    return 0;
}