//Program to check whether a number is Armstrong number or not

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int num,rem,sum=0;
    cin>>num;
    int temp=num;
    while(num!=0){
        rem=num%10;
        sum+=pow(rem,3);
        num/=10;
    }
    if(sum==temp)
        cout<<temp<< " is an armstrong number";
    else
        cout<<temp<< " is not an armstrong number";
    return 0;
}