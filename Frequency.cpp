//program to calculate frequency of characters in a string

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i;
    int freq[256] = {0};
    cin >> str;
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
            cout << "The frequency of " << char(i) << " is " << freq[i] << endl;
    }
    return 0;
}