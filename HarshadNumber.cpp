// program to check whether a number is a Harshad Number or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,temp,sum=0;
    cin>>num;
    temp=num;
    while(num>0){
        int rem=num%10;
        sum+=rem;
        num/=10;
    }
    if(temp%sum==0)
        cout<<temp<<" is harshad number";
    else
        cout<<temp<<" is not harshad number";
    return 0;
}