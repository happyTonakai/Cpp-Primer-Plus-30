/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 17:15:54
 * @LastEditTime: 2020-06-15 17:18:24
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
    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Dove", 3.2, 300},
        {"Coke", 4, 100}};
    cout << snack[0].brand << ", " << snack[0].weight << ", " << snack[0].cal << endl;
    cout << snack[1].brand << ", " << snack[1].weight << ", " << snack[1].cal << endl;
    cout << snack[2].brand << ", " << snack[2].weight << ", " << snack[2].cal << endl;
    return 0;
}