#include<iostream>
#include<cmath>
using namespace std;
double geo(int n){
    if(n==0)
        return 1.0;
    if(n<0)
        return-1;
    return 1.0/pow(2,n)+geo(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<geo(n)<<endl;
}