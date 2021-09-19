//program to sort an array in ascending and descending order

#include<bits/stdc++.h>
using namespace std;
int main(){
    int len,i,j,p,q;
    cin>>len;
    int arr[50];
    for(i=0;i<len;i++)
        cin>>arr[i];
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
    cout<<"Ascending order: ";
    for(i=0;i<len;i++)
        cout<<arr[i]<<" ";
        
    for(p=0;p<len;p++){
        for(q=p+1;q<len;q++){
            if(arr[p]<arr[q])
                swap(arr[p],arr[q]);
        }
    }
    cout<<"\nDescending order: ";
    for(p=0;p<len;p++)
        cout<<arr[p]<<" ";
    return 0;
}