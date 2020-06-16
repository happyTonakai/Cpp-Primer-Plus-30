/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 17:40:54
 * @LastEditTime: 2020-06-16 17:56:23
 */
#include <iostream>
using namespace std;
const int ArrSize = 3;
const int TotalYear = 2;
int main()
{
    char *months[ArrSize] = {
        "Jan", "Feb", "Mar" //, "Apr", "May", "Jun", "July", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int sales[ArrSize][TotalYear];
    int sum[TotalYear] = {0};
    int total = 0;
    for (int j = 0; j < TotalYear; j++)
    {
        for (int i = 0; i < ArrSize; i++)
        {
            cout << months[i] << ": ";
            cin >> sales[i][j];
            sum[j] += sales[i][j];
        }
        total += sum[j];
    }
    for (int j = 0; j < TotalYear; j++)
        cout << "Total sales of the No." << j + 1 << " year is " << sum[j] << endl;
    cout << "Total sales of " << TotalYear << " years is " << total << endl;
    return 0;
}