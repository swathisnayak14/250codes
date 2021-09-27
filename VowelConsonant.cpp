//program to check whether Character is a vowel or consonant

#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        cout<<"vowel";
    else
        cout<<"consonant";
    return 0;
}