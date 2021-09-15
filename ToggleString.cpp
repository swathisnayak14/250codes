//program to toggle each characters in a string(upper case to lower and vice-versa)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[30];
    int i;
    cin >> str;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    cout << "After toggling the string is " << str;
    return 0;
}