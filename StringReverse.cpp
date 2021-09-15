//program to print the given string in reverse order

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int i,length=0;
    cin>>str;
    length=strlen(str);
    cout<<"The reversed string is ";
    for(i=length-1;i>=0;i--){
        cout<<str[i];
    }
    return 0;
}