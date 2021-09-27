//Program to count the number of days in a given month of a year

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int month, year;
    cin >> month >> year;
    if (month == 2 && (year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0)))
        cout << "29 days";
    else if (month == 2)
        cout << "28 days";
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "31 days";
    else
        cout << "30 days";
    return 0;
}