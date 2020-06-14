/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-14 20:53:15
 * @LastEditTime: 2020-06-14 21:19:05
 */
#include <iostream>
using namespace std;
double ly2au(double);
int main()
{
    float light_year;
    cout << "Enter the number of light years: ";
    cin >> light_year;
    cout << light_year << " light years = " << ly2au(light_year) << " astronomical units.\n";
    return 0;
}

double ly2au(double light_year)
{
    return 63240 * light_year;
}