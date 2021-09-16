//program to find non repeating characters in a string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i;
    int freq[256] = {0}; //freq={1,1,1,}
    cin >> str;
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    cout << "The non-repeating strings are ";
    for (i = 0; i < 256; i++)
    {
        if (freq[i] == 1)
            cout << char(i) << " ";
    }
    return 0;
}