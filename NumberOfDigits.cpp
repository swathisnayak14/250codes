//Program to find number of digits in an integer

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,digit=0;
    cin>>num;
    while(num!=0){
        num/=10;
        digit++;
    }
    cout<<digit;
    return 0;
}