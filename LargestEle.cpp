//Largest Element in an array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int large=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>large)
            large=a[i];
    }
    cout<<large;
    return 0;
}