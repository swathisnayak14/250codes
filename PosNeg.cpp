// check wether a number is positive or negative

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0)
        cout<<"POSITIVE";
    else if(n==0)
        cout<<"NEITHER POSITIVE NOR NEGATIVE";
    else
        cout<<"NEGATIVE";
    return 0;
}
