/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-26 18:17:39
 * @LastEditTime: 2020-06-26 18:41:18
 */

#include <iostream>
using namespace std;
const int MAX = 10;
int fill(int[], int);
void show(int[], int);
void avg(int[], int);

int main()
{
    int score[MAX];
    int size = fill(score, MAX);
    show(score, size);
    avg(score, size);
    return 0;
}

int fill(int a[], int size)
{
    cout << "Type 10 scores at most. Type alphabet to terminate." << endl;
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (cin >> a[i])
            ;
        else
            break;
    }
    return i; // return the size of array
}

void show(int a[], int size)
{
    cout << "Your socres: ";
    for (int j = 0; j < size; j++)
        cout << a[j] << " ";
    cout << endl;
}

void avg(int a[], int size)
{
    double sum = 0;
    for (int j = 0; j < size; j++)
        sum += a[j];
    double avg = sum / size;
    cout << "Average score: " << avg << endl;
}