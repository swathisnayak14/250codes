//Program to find the Reverse of a Number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,reverse=0,rem;
    cin>>num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    cout<<reverse;
    return 0;
}