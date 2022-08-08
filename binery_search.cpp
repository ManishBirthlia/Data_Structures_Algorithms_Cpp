#include<iostream>
using namespace std;
//Binary search algorithm
void binary_search(int a[],int n,int key){
    int s=0,e=n-1,b=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(a[mid]==key){
            b=mid;
            break;
        }else if(a[mid]>key){
            e=mid-1;
            mid=(s+e)/2;
        }else{
            s=mid+1;
            mid=(s+e)/2;
        }
    }
    if(b==-1){
        cout<<"The key is not present"<<endl;
    }else{
        cout<<"The key is present at index "<<b<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key;
    cout<<"Enter the Key"<<endl;
    cin>>key;
    binary_search(a,n,key);
}
