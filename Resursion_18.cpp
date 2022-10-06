#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
void permutation(string s,int n,int i){
    if(n==0){
        return ;
    }
    cout<<s<<endl;
    swap(s[i],s[i+1]);
    if(i==s.length()-2){
        return permutation(s,n-1,i=0);
    }
    return permutation(s,n-1,i+1);
}
int main(){
    string s;
    cin>>s;
    int a=s.length();
    permutation(s,fact(a),0);
}