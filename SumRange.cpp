//Program to find the sum of numbers in a given range in C++

#include<bits/stdc++.h>
using namespace std;
int main(){
    int first,second,i,sum=0;
    cin>>first>>second;
    for(i=first;i<=second;i++){
        sum+=i;
    }
    cout<<"Sum is "<<sum;
    return 0;
}