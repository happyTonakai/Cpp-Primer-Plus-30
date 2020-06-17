/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-17 17:09:44
 * @LastEditTime: 2020-06-17 17:19:14
 */
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ss[100];
    char ch;
    int i = 0;
    while (cin.get(ch))
    {
        if (ch == '@')
            break;
        if (isalpha(ch))
        {
            if (isupper(ch))
                ss[i] = tolower(ch);
            else
                ss[i] = toupper(ch);
            i++;
        }
    }
    ss[i] = '\0';
    cout << ss << endl;
    return 0;
}