//Program to Find the Sum of First N Natural Numbers 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,i;
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum is "<<sum;
    return 0;
}
