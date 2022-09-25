#include<iostream>

using namespace std;

void print(char a[]){
    if(a[0]=='\0')
        return;
    print(a+1);
    cout<<a[0];
}
int main(){
    char a[]="abcd";
    print(a);
}