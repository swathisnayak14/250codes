//Check if a Number is Prime Number or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, div = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            div++;
    }
    if (div == 2)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";
    return 0;
}