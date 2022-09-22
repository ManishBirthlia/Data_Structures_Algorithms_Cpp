#include<iostream>
using namespace std;

bool check(int a[],int n, int key){
    if(n==0)
        return false;
    if(a[n-1]==key)
        return true;
    return check(a,n-1,key);
}

int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(check(a,n,key))
        cout<<"present"<<endl;
    else
        cout<<"not present"<<endl;
}