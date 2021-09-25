//program to find the GCD or HCF of two numbers

#include <bits/stdc++.h>
using namespace std;

int GCD(int first, int second)
{
    if (first == 0)
        return second;
    if (second == 0 || first == second)
        return first;
    else if (first > second)
        return (first - second, second);
    else
        return (first, second - first);
}

int main()
{
    int first, second;
    cin >> first >> second;
    cout << GCD(first, second);
    return 0;
}