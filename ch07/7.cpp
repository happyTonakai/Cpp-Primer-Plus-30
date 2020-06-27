/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-27 15:23:55
 * @LastEditTime: 2020-06-27 15:39:20
 */
#include <iostream>
using namespace std;
double *fill_array(double[], int);
void show_array(double *, double *);
void reverse_array(double *, double *);

int main()
{
    double arr[10];
    double *arrend = fill_array(arr, 10);
    cout << *arrend << endl;
    show_array(arr, arrend);

    reverse_array(arr, arrend);
    show_array(arr, arrend);

    reverse_array(arr, arrend);
    reverse_array(arr + 1, arrend - 1);
    show_array(arr, arrend);

    return 0;
}

double *fill_array(double arr[], int n)
{
    cout << "Please enter " << n << " numbers." << endl;
    int i = 0;
    while (i < n && cin >> arr[i])
        i++;
    return arr + i - 1;
}

void show_array(double *arrbeg, double *arrend)
{
    while (arrbeg <= arrend)
    {
        cout << *arrbeg << " ";
        arrbeg++;
    }
    cout << endl;
}

void reverse_array(double *arrbeg, double *arrend)
{
    double tmp;
    while (arrbeg <= arrend)
    {
        tmp = *arrbeg;
        *arrbeg = *arrend;
        *arrend = tmp;
        arrbeg++;
        arrend--;
    }
}