//program to count numbers of even and odd elements in an array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, i;
    int even = 0, odd = 0;
    cin >> size;
    int a[size];
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
        (a[i] % 2 == 0)?even++:odd++;
    }
    cout << even<<endl;
    cout << odd;
    return 0;
}

