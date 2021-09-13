//Program to find the sum of digits of a number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    cin>>num;
    while(num!=0){
        sum+=num%10;
        num=num/10;
    }
    cout<<sum;
    return 0;
}