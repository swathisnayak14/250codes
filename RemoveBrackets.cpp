//program to remove brackets from an algebraic expression

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100], str_no_space[100];
    int i = 0, j = 0;
    cin >> str;
    while (str[i] != '\0')
    {
        if (str[i] != '(' && str[i] != ')')
        {
            str_no_space[j++] = str[i];
        }
        i++;
    }
    str_no_space[j] = '\0';
    cout << "After removing the spaces: " << str_no_space;
    return 0;
}