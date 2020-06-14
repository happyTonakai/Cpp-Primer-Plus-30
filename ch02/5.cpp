/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-14 20:53:15
 * @LastEditTime: 2020-06-14 21:15:10
 */
#include <iostream>
using namespace std;
float ce2fa(float);
int main()
{
    float ce;
    cout << "Please enter a Celsius value: ";
    cin >> ce;
    cout << ce << " degrees Celsius is " << ce2fa(ce) << " degrees Fahrenheit." << endl;
    return 0;
}

float ce2fa(float ce)
{
    return 1.8 * ce + 32;
}