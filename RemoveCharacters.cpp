//program to remove all character from string except alphabets

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int i,j;
    cin>>str;
    for(i=0;str[i]!='\0';i++){
        while(!((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || str[i]=='\0')){
            for(j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
    cout<<"After removal of characters: "<<str;
    return 0;
}