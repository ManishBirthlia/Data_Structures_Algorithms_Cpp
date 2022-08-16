#include<iostream>
using namespace std;

void merge(int a[],int b[],int c[],int x,int y){
    if(x<1 && y>0){
        c[0]=b[0];
        merge(a,b+1,c+1,0,y-1);
    }else if(x>0 && y<1){
        c[0]=a[0];
        merge(a+1,b,c+1,x-1,0);
    }else if(x<=0 && y<=0){
        return ;
    }else if(a[0]<=b[0]){
        c[0]=a[0];
        merge(a+1,b,c+1,x-1,y);
    }else if(a[0]>b[0]){
        c[0]=b[0];
        merge(a,b+1,c+1,x,y-1);
    }
}

void mergeSort(int c[],int n){
    if(n<=1)
        return;
    int a[n/2];
    int b[n-n/2];
    for(int i=0;i<n;i++){
        if(i<n/2){
            a[i]=c[i];
        }else{
            b[i-n/2]=c[i];
        }
    }
    mergeSort(a,n/2);
    mergeSort(b,n-n/2);
    merge(a,b,c,n/2,n-n/2);
}

int main(){
    int n;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    mergeSort(c,n);
    for(int i=0;i<n;i++)
        cout<<c[i]<<" ";
}