#include<iostream>
using namespace std;
int number(int n){
    if (n<1)
        return 0;
    return 1+number(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<"The number of digits: "<<number(n)<<endl;
}