// Program to Find Prime number between 1 to 100

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            cout << i<<" ";
        count = 0;
    }
    return 0;
}