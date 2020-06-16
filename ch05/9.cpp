/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 18:49:48
 * @LastEditTime: 2020-06-16 19:01:25
 */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string words[100];
    int i = 0;
    do
    {
        cin >> words[i];
        i++;
    } while (words[i - 1] != "done");
    cout << i - 1 << " words in total: " << endl;

    // for (string x : words)  the length of words = 100!
    for (int j = 0; j < i - 1; j++)
        cout << words[j] << endl;
    return 0;
}