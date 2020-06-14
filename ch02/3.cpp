/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-14 20:43:28
 * @LastEditTime: 2020-06-14 20:48:02
 */
#include <iostream>
using namespace std;
void fun1(); // function prototype!!
void fun2(); // function prototype!!

int main()
{
    fun1();
    fun1();
    fun2();
    fun2();
    return 0;
}

void fun1()
{
    cout << "Three blind mice" << endl;
}
void fun2()
{
    cout << "See how they run" << endl;
}