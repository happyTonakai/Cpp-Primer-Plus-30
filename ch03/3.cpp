/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 10:23:21
 * @LastEditTime: 2020-06-15 10:29:24
 */
#include <iostream>
using namespace std;
const int MIN_PER_DEG = 60;
const int SEC_PER_MIN = 60;
int main()
{
    float deg, min, sec, result;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl
         << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;
    result = deg + (min + sec / SEC_PER_MIN) / MIN_PER_DEG;
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << result << " degrees.\n";
    return 0;
}