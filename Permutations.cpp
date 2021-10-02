//Program to find Permutations in which n people can occupy r seats in a classroom

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int people, seats;
    cin >> people >> seats;
    if (seats < people)//seats=n; people=r;
    {
        cout << "Cannot adjust";
        return 0;
    }
    int f = factorial(seats) / factorial(seats - people);
    cout << f;
    return 0;
}