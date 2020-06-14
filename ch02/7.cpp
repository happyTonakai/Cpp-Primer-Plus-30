/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-14 21:19:59
 * @LastEditTime: 2020-06-14 21:23:08
 */
#include <iostream>
using namespace std;
void showtime(int, int);
int main()
{
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    showtime(hour, minute);
    return 0;
}

void showtime(int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute << endl;
}