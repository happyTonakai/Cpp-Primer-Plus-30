/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 10:29:55
 * @LastEditTime: 2020-06-15 10:41:22
 */
#include <iostream>
using namespace std;
const int HOUR_PER_DAY = 24;
const int MIN_PER_HOUR = 60;
const int SEC_PER_MIN = 60;
int main()
{
    long sec;
    int days, hours, mins, secs;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    days = sec / (HOUR_PER_DAY * MIN_PER_HOUR * SEC_PER_MIN);
    secs = sec % (HOUR_PER_DAY * MIN_PER_HOUR * SEC_PER_MIN);
    hours = secs / (MIN_PER_HOUR * SEC_PER_MIN);
    secs %= MIN_PER_HOUR * SEC_PER_MIN;
    mins = secs / SEC_PER_MIN;
    secs %= SEC_PER_MIN;
    cout << sec << " seconds = " << days << " days, " << hours << " hours, " << mins << " minutes, " << secs << " seconds.\n";
    return 0;
}