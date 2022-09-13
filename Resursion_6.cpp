#include<iostream>
using namespace std;
int multi(int x,int n){
    if(n==0)
        return 0;
    return x+multi(x,n-1);
}

int main (){
    int x,n;
    cin>>x>>n;
    cout<<"multiplcaton : "<<multi(x,n)<<endl;
}