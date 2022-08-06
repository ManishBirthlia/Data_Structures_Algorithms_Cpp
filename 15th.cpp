#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s="manish",s1="abcd",s2="efgh";
    // string s1,s2="efgh";
    // s1="abcd";
    // s2="efgh";
    // all are same
    // cout<<s<<" "<<s1<<" "<<s2<<endl;
    // Differently
    string *a=new string;
    *a="badc";
    // cout<<a; //" this will print address of string "
    // cout<<endl<<*a; //" this will print string itself"

    sort(a->begin(),a->end());
    cout<<*a;
    
}