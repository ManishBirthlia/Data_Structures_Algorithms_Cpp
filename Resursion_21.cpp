#include<iostream>
#include<cmath>
using namespace std;

int game(int n){
    if(n<3){
        return pow(2,n)-1;
    }
    return 3+2*game(n-2);
}
int game1(int n){
    if(n==1){
        return 1;
    }
    return 1+2*game1(n-1);
}

int main(){
    int a;
    cin>>a;
    cout<<game1(a);
}