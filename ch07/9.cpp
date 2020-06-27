/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-27 16:07:00
 * @LastEditTime: 2020-06-27 16:34:00
 */
#include <iostream>
using namespace std;
const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int level;
};

int getinfo(student pa[], int n); // an array of student structures
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student *ps = new student[class_size];
    int entered = getinfo(ps, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ps[i]);
        display2(&ps[i]);
    }
    display3(ps, entered);
    delete[] ps;
    cout << "Done." << endl;
    return 0;
}

int getinfo(student *ps, int class_size)
{
    int i;
    for (i = 0; i < class_size; i++)
    {
        cout << "Name: ";
        cin.getline(ps[i].fullname, SLEN);
        cin.get();
        cout << "Hobby: ";
        cin.getline((ps + i)->hobby, SLEN);
        cout << "OOP level: ";
        cin >> (ps + i)->level;
    }
    return i;
}

void display1(student st)
{
    cout << st.fullname << "'s hobby is " << st.hobby << ", and oop level is " << st.level << endl;
}
void display2(const student *ps)
{
    cout << ps->fullname << "'s hobby is " << ps->hobby << ", and oop level is " << ps->level << endl;
}
void display3(const student *ps, int class_size)
{
    for (int i = 0; i < class_size; i++)
    {
        cout << (ps + i)->fullname << "'s hobby is " << (ps + i)->hobby << ", and oop level is " << (ps + i)->level << endl;
    }
}