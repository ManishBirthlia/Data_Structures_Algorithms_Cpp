#include<iostream>
#include<vector>

using namespace std;

void storeValue(int a[],int n,int key ,int i,vector<int>v){
    if(i==n){
        return ;
    }
    if(a[i]==key){
        v.push_back(i);
    }
    return storeValue(a,n,key,i+1,v);
}
// int size(vector<int>v,int i){
//     if(v[i]==0)
//         return 0;
//     return 1+size(v,i+1);
// }

int main(){
    vector<int>v;
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    storeValue(a,n,key,0,v);

    for(int i=0;i<size(a);i++){
        cout<<v[i]<<" ";
    }
}