//program to find minimum scalar of two vectors

#include <bits/stdc++.h>
using namespace std;

int ScalarProduct(int a1, int a2, int n)
{
    int sum;
    for(int i=0;i<n;i++)
        sum+=a1[i]*a2[i];
    return sum;
}

void sort(int a1[], int a2[], int n)
{
    for (int i = 0; i < n; i++)//ascending
    {
        for (int j = 0; j < n; j++)
        {
            if(a1[i]>a1[j])
                swap(a1[i],a2[j]);
        }
        for (int j = 0; j < n; j++)
        {
            if(a2[i]<a2[j])
                swap(a1[i],a2[j]);
        }
    }

        
}

int main()
{
    int size, a1[size], a2[size];
    cin >> size;
    for (int i = 0; i < size; i++)
        cin >> a1[i];
    cin >> size;
    for (int i = 0; i < size; i++)
        cin >> a2[i];
    sort(a1, a2, size);
    cout << ScalarProduct(a1, a2, size);
    return 0;
}

//doubt