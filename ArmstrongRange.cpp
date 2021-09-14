//Program to find Armstrong numbers between two intervals

#include<bits/stdc++.h>
using namespace std;

void armstrong(int num){
    int rem,sum=0;
    int temp=num;
    do{
        rem=num%10;
        sum+=pow(rem,3);
        num/=10;
    }while(num>0);
    if(sum==temp)
        cout<<temp<<"\t";
}

int main(){
    int first,second,i;
    cin>>first>>second;
    for(i=first;i<=second;i++)
        armstrong(i);
    return 0;
}