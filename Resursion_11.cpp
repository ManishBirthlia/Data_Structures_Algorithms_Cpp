#include<iostream>
using namespace std;

int last(int a[],int n, int key){
    if(n==0)
        return -1;
    if(a[n-1]==key)
        return n-1;
    else
        return last(a,n-1,key);
}

int first(int a[],int n,int key){
    if(n==0)
        return -1;
    if(a[0]==key)
        return 0;
    else
        return 1+first(a+1,n-1,key);
}

int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Element is present at : "<<first(a,n,key);
}