//Program to print Fibonacci Series up to N numbers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first = 0, second = 1, next, i, num;
    cin >> num;
    for (i = 0; i < num; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    return 0;
}