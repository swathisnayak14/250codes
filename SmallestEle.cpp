//Smallest Element in an array 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int small,secsmall=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<INT_MAX)
            small=a[i];//1
    }
    for(int i=0;i<n;i++){// 1 3 4 5 2
        if(a[i]>small && a[i]<secsmall)
            secsmall=a[i];
    }
    cout<<small;
    return 0;
}