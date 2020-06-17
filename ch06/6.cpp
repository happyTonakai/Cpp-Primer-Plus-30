/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-17 18:10:48
 * @LastEditTime: 2020-06-17 18:29:19
 */
#include <iostream>
using namespace std;
#include <string>
struct donate
{
    string name;
    double money;
};
int main()
{
    // input
    int n;
    cout << "Please enter the number of donators: ";
    cin >> n;
    donate *d = new donate[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Name: ";
        cin >> d[i].name;
        cout << "Money: ";
        cin >> d[i].money;
    }
    // output
    bool grandF = false, otherF = false;
    cout << "\nGrand Patrons:\n";
    for (int i = 0; i < n; i++)
    {
        if (d[i].money >= 10000)
        {
            cout << d[i].name << ": \t" << d[i].money << endl;
            grandF = true;
        }
    }
    if (grandF == false)
        cout << "None" << endl;

    cout << "\nPatrons:\n";
    for (int i = 0; i < n; i++)
    {
        if (d[i].money < 10000)
        {
            cout << (d + i)->name << ": \t" << (d + i)->money << endl;
            otherF = true;
        }
    }
    if (otherF == false)
        cout << "None" << endl;

    delete[] d;

    return 0;
}