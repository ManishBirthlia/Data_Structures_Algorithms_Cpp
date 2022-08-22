#include<iostream>
#include"OOPS_1_1.cpp"
using namespace std;

int main(){
    int n;
    cin>>n;
    boy b1[n];
    for(int i=0;i<n;i++){
        b1[i].basic_info();
        b1[i].get_info();
    } 

}