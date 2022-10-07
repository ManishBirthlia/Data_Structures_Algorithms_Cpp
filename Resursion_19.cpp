#include<iostream>
using namespace std;
void permu(string s,int a){
    if(a=s.length()){
        cout<<s<<endl;
        return;
    }
    for(int i=a;i<s.length()-1;i++){
        swap(s[i],s[i+1]);
        permu(s.substr(1),a+1);
        swap(s[i],s[i+1]);
    }
}
int main(){
    permu("abc",0);
}