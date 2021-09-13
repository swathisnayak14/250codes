//program to the Power of a number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int base,expo;
    cin>>base>>expo;
    double res=pow(base,expo);
   cout << fixed <<setprecision(2)<<res<<endl;
    return 0;
}