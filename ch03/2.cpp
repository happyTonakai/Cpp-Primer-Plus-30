/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-15 10:12:44
 * @LastEditTime: 2020-06-15 10:22:32
 */
#include <iostream>
using namespace std;
const int IN_PER_FT = 12;
const float M_PER_IN = 0.254;
const float LB_PER_KG = 2.2;

int main()
{
    float inches, feet, lbs, meters, kgs, bmi;
    cout << "Enter your height: feet and inches. ";
    cin >> feet >> inches;
    cout << "Enter your weight: lbs. ";
    cin >> lbs;
    inches += feet * IN_PER_FT;
    meters = inches * M_PER_IN;
    kgs = lbs / LB_PER_KG;
    bmi = kgs / meters / meters;
    cout << "Your BMI is " << bmi << endl;
    return 0;
}