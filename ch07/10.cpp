/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-27 17:36:06
 * @LastEditTime: 2020-06-27 17:48:36
 */
#include <iostream>
using namespace std;
double calculate(double, double, double (*p)(double, double));
double add(double, double);
double multiply(double, double);

int main()
{
    double (*pf[2])(double, double) = {add, multiply};
    int x, y;
    while (cout << "Enter two numbers (type any letter to quit): " && (cin >> x >> y))
    {
        // cout << x << " + " << y << " = " << calculate(x, y, add) << endl;
        // cout << x << " * " << y << " = " << calculate(x, y, multiply) << endl;
        for (int i = 0; i < 2; i++)
            cout << calculate(x, y, pf[i]) << endl;
    }
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double multiply(double x, double y)
{
    return x * y;
}

double calculate(double x, double y, double (*p)(double, double))
{
    return (*p)(x, y);
    // return p(x, y);
}