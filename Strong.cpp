//Program to check whether a number is a Strong Number or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, temp, i, rem, sum = 0;
    cin >> num;
    temp = num;
    while (num)
    {
        rem = num % 10;
        int fact = 1;
        for (i = rem; i > 0; i--)
        {
            fact = fact * i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == temp)
        cout << temp << " is a strong number";
    else
        cout << temp << " is not a strong number";

    return 0;
}