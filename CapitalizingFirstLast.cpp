//program to capitalize the first and last letter of each word of a string

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i, length = 0;
    cin.getline(str, 100);
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (i == 0 || i == (length - 1))
            str[i] = toupper(str[i]);
        else if (str[i] == ' ')
        {
            str[i - 1] = toupper(str[i - 1]);
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    cout << "The string is " << str;
    return 0;
}