/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 09:54:28
 * @LastEditTime: 2020-06-15 10:15:02
 */

#include <iostream>
using namespace std;
const int IN_PER_FT = 12;
int main()
{
    float height;
    cout << "Please enter your height in inches: ____\b\b\b\b";
    cin >> height;
    cout << height << " inches = " << height / IN_PER_FT << " feet.\n";
    return 0;
}