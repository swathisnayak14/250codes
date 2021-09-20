//program for finding the second smallest element in an array

//with sorting
// #include<bits/stdc++.h>
// using namespace std;

// void secsmall(int a[],int total){
//     for(int i=0;i<total-1;i++){
//         for(int j=i+1;j<total;j++){
//             if(a[i]>a[j]){
//                 swap(a[i],a[j]);
//             }
//         }
//     }
//     cout<<a[1];
// }

// int main(){
//     int a[5]={5,2,56,9,1};
//     secsmall(a,5);
//     return 0;
// }

//without sorting

//find the second largest element in an array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, firstSmall = INT_MAX, secondSmall = INT_MAX;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < firstSmall)
           firstSmall = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != firstSmall && a[i] < secondSmall)
            secondSmall = a[i];
    }
    cout << secondSmall;

    return 0;
}