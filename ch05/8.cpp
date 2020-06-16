/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 18:42:15
 * @LastEditTime: 2020-06-16 19:00:47
 */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char words[100][100]; // the first 100 is number of words, the second is length of each word
    int i = 0;
    do
    {
        cin >> words[i];
        i++;
    } while (strcmp(words[i - 1], "done"));
    cout << i - 1 << " words in total: \n";

    for (int j = 0; j < i - 1; j++)
        cout << words[j] << endl;

    return 0;
}
