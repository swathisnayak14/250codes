//Occurrence of a digit in a given number 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,digit,count=0;
    cin>>num>>digit;
    while(num){
        int rem=num%10;
        num/=10;
        if(rem==digit){
            count++;
        }
    }
    cout<<count;
    return 0;
}