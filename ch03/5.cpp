/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 10:42:15
 * @LastEditTime: 2020-06-15 10:47:59
 */
#include <iostream>
using namespace std;
int main()
{
    long long pop1, pop0;
    float percent;
    cout << "Enter the world's population: ";
    cin >> pop0;
    cout << "Enter the population of the US: ";
    cin >> pop1;
    percent = double(pop1) / pop0 * 100;
    cout << "The population of the US is " << percent << "% of the world population.\n";
    return 0;
}