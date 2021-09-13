//Program to Find Greatest of Two Numbers

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<"BOTH ARE EQUAL";
    else if(a>b)
        cout<<a<<" IS GREATER THAN "<<b;
    else
        cout<<b<<" IS GREATER THAN "<<a;
    return 0;
}