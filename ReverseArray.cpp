//Program to Reverse elements of an array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], b[100], n, j;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
        b[j] = a[i];

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
        cout << a[i] << " ";
    }
    return 0;
}