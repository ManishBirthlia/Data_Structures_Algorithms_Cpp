#include<iostream>
#include<cstring>
using namespace std;
 void sufix(char a[]){
     for (int i =strlen(a)-1; i>=0 ; i--)
     {
        for (int j = i; j<=strlen(a)-1; j++)
        {
            cout<<a[j];
        }
        // cout<<a[i];
        cout<<endl;
     }
 }
 int main(){
     char a[] = "abcdefgh";
     sufix(a);
 }