//program to check whether a character is alphabet or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    cin >>n;
    if (n >= 65 && n <= 90 || n >= 97 && n <= 122)
        cout << "alphabet";
    else
        cout << "not an alphabet";
    return 0;
}