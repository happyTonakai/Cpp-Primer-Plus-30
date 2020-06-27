/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-27 11:10:27
 * @LastEditTime: 2020-06-27 11:28:05
 */
#include <iostream>
using namespace std;
double field(int, int);
double special(int);
int main()
{
    int nField, nSelect, nSpecial;

    while (cout << "Enter the total number of fields and selections: " && (cin >> nField >> nSelect))
    {
        cout << "Enter the amount of special numbers: ";
        cin >> nSpecial;
        cout << "The probability of lotto is " << field(nField, nSelect) * special(nSpecial) << endl;
    }

    return 0;
}

double field(int nField, int nSelect)
{
    return (double)nSelect / (double)nField;
}
double special(int nSpecial)
{
    return 1.0 / (double)nSpecial;
}