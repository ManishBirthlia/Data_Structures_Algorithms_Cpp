#include<iostream>
#include<cstring>
using namespace std;
bool strcmp(char b[],char c[]){
    if(strlen(b)!=strlen(c)){
        return false;
    }
    for(int i=0;i<strlen(b);i++){
        if(b[i]!=c[i]){
            return false;
        }
    }
    return true;
}

int main(){
    char b[100],c[100];
    cin>>b>>c;
    strcmp(b,c);
    if(strcmp(b,c)){
        cout<<"these strings are equals";
    }else{
        cout<<"not equals";
    }
}