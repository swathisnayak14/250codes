//Program to check whether a number is an Abundant Number or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, rem, sum = 0;
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
            sum += i;
    }
    if (sum > num)
        cout << num << " is an abundant number";
    else
        cout << num << " is not an abundant number";

    return 0;
}