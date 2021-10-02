//program to check if two strings are Anagram or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 0, flag = 0, first[26] = {0}, second[26] = {0};
    char str1[100], str2[100];
    cin >> str1;
    cin >> str2;
    while (str1[c] != '\0')
    {
        first[str1[c] - 'a']++;
        c++;
    }
    c = 0;
    while (str2[c] != '\0')
    {
        second[str2[c] - 'a']++;
        c++;
    }

    for (c = 0; c < 26; c++)
    {
        if (first[c] != second[c])
            flag = 1;
    }
    (flag) ? cout << "Strings are not anagrams" : cout << "Strings are anagrams";
    return 0;
}