#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        map<int,int>mp;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            m[a]=1;
        }
        int ans=0;
        for(int i=0;i<10;i++){
            for(int j=i+1;j<10;j++){
                if(!mp.count(i) && !mp.count(j)){
                    ans+=24;
                }
            }
        }
        cout<<ans<<endl;
    }
}