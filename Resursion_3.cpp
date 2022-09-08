#include<iostream>
using namespace std;
void print(int n,int a){
    if(n>=1&&a<n){
        cout<<a<<" ";
        print(n,a+1);
        a=a+1;
    }
    else if(a==n){
        cout<<n<<" ";
    }else{
        cout<<"PLZ take number > 0";
    }
}

int main(){
    int n;
    cin>>n;
    int a=1;
    print(n,a);
}