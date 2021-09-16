//program for finding the second smallest element in an array


#include<bits/stdc++.h>
using namespace std;

void secsmall(int a[],int total){
    for(int i=0;i<total-1;i++){
        for(int j=i+1;j<total;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    cout<<a[1];
}

int main(){
    int a[5]={5,2,56,9,1};
    secsmall(a,5);
    return 0;
}