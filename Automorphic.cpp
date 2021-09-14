//Program to check whether a number is an Automorphic number or not

#include<bits/stdc++.h>
using namespace std;
 int main(){
     int num,temp,sq,flag=0;
     cin>>num;
     sq=num*num;
     temp=num;
     while(num>0){
         if(num%10!=sq%10){
              flag=1;
                break;
            }
        num/=10;
        sq/=10; 
     }
     if(flag==1)
        cout<<temp<<" is not an automorphic number";
    else
        cout<<temp<<" is an automorphic number";
     return 0;
 }