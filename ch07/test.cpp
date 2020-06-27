/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-21 17:12:24
 * @LastEditTime: 2020-06-27 18:27:03
 */
#include <iostream>
using namespace std;
struct time
{
    int hours;
    int minutes;
};

time sum(const time *, const time *);
void show_time(time);
int main()
{
    // time time1 = {1, 55};
    // time time2 = {2, 15};
    // time total;
    // total = sum(&time1, &time2);
    // show_time(total);
    // return 0;

    int var[3] = {10, 20, 30};
    int *p[3];
    int *pt;
    for (int i = 0; i < 3; i++)
    {
        p[i] = &var[i]; // 赋值为整数的地址
    }
    for (int i = 0; i < 3; i++)
    {
        cout << **(p + i) << " = " << *(pt + i) << endl;
        cout << *p[i] << " = " << pt[i] << endl;
    }
    return 0;
}

time sum(const time *pt1, const time *pt2)
{
    time total;
    total.minutes = (pt1->minutes + pt2->minutes) % 60;
    total.hours = (*pt1).hours + (*pt2).hours + (pt1->minutes + pt2->minutes) / 60;
    return total;
}

void show_time(time time)
{
    cout << time.hours << ":" << time.minutes << endl;
}