//Program to check whether two numbers are Friendly Pair(Amicable number) or not

#include <bits/stdc++.h>
using namespace std;

void Amicable(int first, int second)
{
    int i, sum1 = 0, sum2 = 0;
    for (i = 1; i <= first / 2; i++)
    {
        if (first % i == 0)
            sum1 += i;
    }
    for (i = 1; i <= second / 2; i++)
    {
        if (second % i == 0)
            sum2 += i;
    }
    if (sum2 == first && sum1 == second)
        cout << "Friendly pair";
    else
        cout << "Not a friendly pair";
}

int main()
{
    int first, second;
    cin >> first >> second;
    Amicable(first, second);
    return 0;
}