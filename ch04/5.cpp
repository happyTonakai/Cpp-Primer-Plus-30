/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 17:03:59
 * @LastEditTime: 2020-06-15 17:14:24
 */
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string brand;
    float weight;
    int cal;
};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << snack.brand << ", " << snack.weight << ", " << snack.cal << endl;
    return 0;
}