//Smallest Element in an array 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int small;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<INT_MAX)
            small=a[i];
    }
    cout<<small<<" is the smallest element in the array";
    return 0;
}