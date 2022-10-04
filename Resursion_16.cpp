#include<iostream>
#include<string>
#include<vector>
using namespace std;

void sub_Store(string a,string b,vector<string>s){
    if(a.length() == 0){
        cout<<b<<endl;
        return ;
    }
    // s.push_back(b);
    return sub_Store(a.substr(1),b,s);
    return sub_Store(a.substr(1),b+=a[0],s);
}

int main(){
    string a="abc";
    string b="";
    vector<string>s;
    sub_Store(a,b,s);
    // for(int i=0;i<size(s);i++){
    //     cout<<s[i]<<endl;
    // }
}