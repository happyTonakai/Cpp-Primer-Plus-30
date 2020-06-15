/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 17:19:58
 * @LastEditTime: 2020-06-15 17:25:12
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
    pizza random;
    cout << "Brand: ";
    getline(cin, random.brand);
    cout << "Diagram: ";
    cin >> random.diagram;
    cout << "Weight: ";
    cin >> random.weight;
    cout << random.brand << endl
         << random.diagram << endl
         << random.weight << endl;
    return 0;
}