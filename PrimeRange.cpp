// Program to Print Prime numbers in a given range

#include <bits/stdc++.h>
using namespace std;

void prime(int n)
{
    int div = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            div++;
    }
    if (div == 2)
        cout << n << endl;
}
int main()
{
    int first, second, i;
    cin >> first >> second;
    for (i = first; i <= second; i++)
    {
        prime(i);
    }
    return 0;
}