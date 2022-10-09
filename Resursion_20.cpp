#include<iostream>
using namespace std;

int jump(int n){
    if(n==0||n==1){
        return 1;
    }
    if(n==2)
        return 2;
    return jump(n-1)+jump(n-2)+jump(n-3);
}

int main(){
    cout<<jump(5)<<endl;
}