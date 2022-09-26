#include<iostream>
using namespace std;

void remove(char a[],char b){
    if(a[0]=='\0')
        return;
    if(a[0]==b){
        for(int i=0;a[i]!='\0';i++){
            a[i]=a[i+1];
        }
        return remove(a,b);
    }else{
        return remove(a+1,b);
    }
}

int main(){
    char a[]="aaramaaisaabestaaforever";
    remove(a,'a');
    cout<<a;
}