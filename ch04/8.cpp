/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 18:41:15
 * @LastEditTime: 2020-06-15 18:48:41
 */
#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    string brand;
    float diagram;
    float weight;
};

int main()
{
    pizza *p = new pizza;
    cin >> (*p).diagram;
    getchar();
    getline(cin, p->brand);
    cin >> p->weight;
    cout << p->brand << ", " << p->diagram << ", " << p->weight << endl;
    return 0;
}