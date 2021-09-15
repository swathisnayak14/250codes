//program to count the number of vowels in a string

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[30];
    int i, count = 0;
    cin >> str;
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    cout << "The number of vowels in the string are " << count;
    return 0;
}