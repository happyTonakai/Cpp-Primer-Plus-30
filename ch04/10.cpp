/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 18:56:45
 * @LastEditTime: 2020-06-15 19:09:05
 */
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<double, 3> score = {0};
    int sum = 0;
    cout << "Please enter your 3 scores: " << endl;
    for (int i = 0; i < 3; ++i)
    {
        cin >> score[i];
        sum += score[i];
        cout << i + 1 << " times average score: " << float(sum) / (i + 1) << endl;
    }

    return 0;
}