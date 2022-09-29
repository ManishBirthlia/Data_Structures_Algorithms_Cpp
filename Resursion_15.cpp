#include<iostream>
using namespace std;

void removeExtra(char a[]){
    if(a[0]=='\0')
        return;
    if(a[0]==a[1]){
        for(int i=0;a[i]!='\0';i++){
            a[i]=a[i+1];
        }
        return removeExtra(a);
    }else{
        return removeExtra(a+1);
    }
}

int main(){
    char a[]="aabbcccdddddddddddeeeeeaa";
    removeExtra(a);
    cout<<a;
}