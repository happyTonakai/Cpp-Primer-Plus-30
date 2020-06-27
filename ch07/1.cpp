/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-26 18:13:08
 * @LastEditTime: 2020-06-26 18:17:23
 */

#include <iostream>
using namespace std;
double avg(double, double);
int main()
{
    int a, b;
    do
    {
        cout << "Please enter two numbers: ";
        cin >> a >> b;
        double c = avg(a, b);
        cout << "Average of " << a << " and " << b << " = " << c << endl;
    } while (a * b != 0);
}

double avg(double a, double b)
{
    return 2.0 * a * b / (a + b);
}