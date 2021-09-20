//Program to Sort first half in ascending order and second half in descending order in an array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len, i, j;
    cin >> len;
    int arr[50];
    for (i = 0; i < len; i++)
        cin >> arr[i];
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[j], arr[i]);
        }
    }

    for (i = 0; i < len / 2; i++)
        cout << arr[i] << " ";
    for (i = len - 1; i >= len / 2; i--)
        cout << arr[i] << " ";
    return 0;
}