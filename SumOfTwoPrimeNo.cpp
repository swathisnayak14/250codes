//Program to check whether a number be expressed as a sum of two prime numbers

#include<bits/stdc++.h>
using namespace std;

int prime(int num){
    int div=0;
    for(int i=1;i<=num;i++){
        if(num%i==0)
            div++;
    }
    if(div==2)
        return 1;
    return 0;
}

int main(){
    int n,flag=0;
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(prime(i)){
            if(prime(n-i)){
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                 flag=1;
                break;
            }
        }
    }
    if(flag==0)
        cout<<"cannot be determined";
    return 0;
}