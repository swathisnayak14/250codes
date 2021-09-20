//program to find the frequency of element in an array

#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // 12 9 2 12 3
        // int num = a[i];
        s.insert(a[i]);
        // 12 9 2 3 
    }
    cout<<s.size()<<endl;//counting the distinct elements
    return 0;
}