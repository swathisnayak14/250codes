// program to check if the given string is palindrome or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int i,flag=0,length=0;
    cin>>str;
    length=strlen(str);
    for(i=0;i<length/2;i++){
        if(str[i]==str[length-i-1])
        flag++;
    }
    if(flag==i)
        cout<<str<< " is a palindrome";
    else
    cout<<str<< " is not a palindrome";

    return 0;
}