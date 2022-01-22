//Replace all 0’s with 1 in a given integer

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 48 - '0')
            cout << "1";
        else
            cout << a[i];
    }
    return 0;
}