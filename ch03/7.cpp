/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 10:55:14
 * @LastEditTime: 2020-06-15 11:04:18
 */
#include <iostream>
using namespace std;
const float MILE_PER_100KM = 62.14;
const float LIT_PER_GAL = 3.875;
int main()
{
    float oil_consum;
    cout << "Enter your oil consumptione in liter per 100 km: ";
    cin >> oil_consum;
    oil_consum = 1 / (oil_consum / MILE_PER_100KM / LIT_PER_GAL);
    cout << "Your oil consumption is " << oil_consum << " miles per gallon.\n";
    return 0;
}