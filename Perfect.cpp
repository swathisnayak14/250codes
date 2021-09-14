//check whether a number is Perfect Number or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,div,i,sum=0;
    cin>>num;
    for(i=1;i<num;i++){
        div=num%i;
        if(div==0)
            sum+=i;
    }
    if(sum==num)
        cout<<num<<" is a perfect number";
    else    
        cout<<num<<" is not a perfect number";
    return 0;
}
