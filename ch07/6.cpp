/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-27 15:08:11
 * @LastEditTime: 2020-06-27 15:39:44
 */
#include <iostream>
using namespace std;
int fill_array(double[], int);
void show_array(double[], int);
void reverse_array(double[], int);

int main()
{
    double arr[10];
    int arrlen = fill_array(arr, 10);

    show_array(arr, arrlen);

    reverse_array(arr, arrlen);
    show_array(arr, arrlen);

    reverse_array(arr, arrlen);
    reverse_array(arr + 1, arrlen - 2);
    show_array(arr, arrlen);

    return 0;
}

int fill_array(double arr[], int n)
{
    cout << "Please enter " << n << " numbers." << endl;
    int i = 0;
    while (i < n && cin >> arr[i])
        i++;
    return i;
}

void show_array(double *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void reverse_array(double *arr, int n)
{
    double tmp;
    for (int i = 0; i < n / 2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp;
    }
}