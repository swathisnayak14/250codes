//program for calculating the length of string without using length() function

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[30];
    int length=0,i;
    cin>>str;
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    cout<<"Length of the string is "<<length;
    return 0;
}