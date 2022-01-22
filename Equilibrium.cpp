// program to find Equilibrium index of an array

#include <bits/stdc++.h>
using namespace std;
int equi(int arr[], int n);
int main()
{
    int arr[] = {5, 2, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << equi(arr, n);
    return 0;
}

int equi(int arr[], int n)
{
    int leftSum = 0, sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];
        if (sum == leftSum)
            return i;
        leftSum += arr[i];
    }
    return -1;
}