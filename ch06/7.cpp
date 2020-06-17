/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-17 22:22:30
 * @LastEditTime: 2020-06-17 22:32:08
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Enter words (q to quit):\n";
    string word;
    int i = 0, j = 0, k = 0;
    while (cin >> word && word != "q")
    {
        char c = word[0];
        if (isalpha(c))
        {
            if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
                i++;
            else
                j++;
        }
        else
            k++;
    }
    cout << i << " words beginning with aeiou" << endl;
    cout << j << " words beginning with fuyin" << endl;
    cout << k << " others";
    return 0;
}