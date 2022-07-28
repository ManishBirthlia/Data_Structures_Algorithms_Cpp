#include<iostream>
using namespace std;

void length(char a[]){
    int i;
    for(i=0;a[i]!='\0';i++){
    }
    cout<<"the lenght of given string is "<<i;
}

int main()
{
    char a[100];
    cin.getline(a,100);
    length(a);
}