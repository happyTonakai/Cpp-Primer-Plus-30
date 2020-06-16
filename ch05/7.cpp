/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-16 17:58:42
 * @LastEditTime: 2020-06-16 18:15:40
 */
#include <iostream>
#include <string>
using namespace std;

struct car
{
    string brand;
    int year;
};
int main()
{
    int nCars;
    cout << "How many cars do you have? ";
    cin >> nCars;
    cin.get();
    car *cars = new car[nCars];
    for (int i = 0; i < nCars; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the brand: ";
        getline(cin, cars[i].brand);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.get();
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < nCars; i++)
    {
        cout << cars[i].year << " " << cars[i].brand << endl;
    }
    return 0;
}