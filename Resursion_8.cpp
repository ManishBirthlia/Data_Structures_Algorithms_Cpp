#include<iostream>
using namespace std;

bool sorted(int a[],int n){
    if(n==0||n==1)
        return true;
    if(n==2)
        return a[1]>a[0];
    return sorted(a+1,n-1);
}
bool sorted1(int a[],int n){
    if(n==0||n==1)
        return true;
    if(a[n-1]>a[n-2])
        return sorted1(a,n-1);
    else
        return false;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(sorted1(a,n))
        cout<<"sorted"<<endl;
    else
        cout<<"not sorted"<<endl;
}