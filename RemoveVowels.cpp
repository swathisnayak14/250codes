//program to remove the vowels from a string

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int i,j,len=0;
    cin>>str;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
                for(j=i;j<len;j++){
                    str[j]=str[j+1];
                }
                i--;
                len--;
            }
    }
    cout<<"The string after removing vowels is "<<str;//
    return 0;
}