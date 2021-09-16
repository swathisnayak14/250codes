//Program to find Largest and Smallest Element in an Array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int small , large;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    large=a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] >large)
            large = a[i];
    }
    small=a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < small)
            small = a[i];
    }
    cout << small<<endl;
    cout << large;
    return 0;
}