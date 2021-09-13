//check whether a number is Palindrome or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,reverse=0,rem,temp;
    cin>>num;
    temp=num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    if(temp==reverse)
        cout<<"PALINDROME";
    else
        cout<<"NOT PALINDROME";
    return 0;
}