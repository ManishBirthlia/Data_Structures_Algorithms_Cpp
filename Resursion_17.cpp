#include<iostream>
#include<cmath>
using namespace std;

int convert(char a[],int n,int i){
    if(a[i]=='\0')
        return 0;
    return int(a[i]-'0')*int(pow(10,n-1))+convert(a,n-1,i+1);
}

int main(){
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    cout<<"Valve : "<<convert(a,n,0);
}