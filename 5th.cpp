#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"value of "<<i<<" th of a is "<<a[i]<<endl;
    }
    int c=0;
    int b=n-1;

    while (c<b)
    {
        swap(a[c],a[b]);
        c++;
        b--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"value of "<<i<<" th of a is "<<a[i]<<endl;
    }
}