#include<iostream>
using namespace std;
// int loop(int arr[10][20]){
//     for(int i=0;i<10;i++)
//         for(int j=0;j<20;j++){
//             cout<<"element of "<<i<<j<<"is "<<arr[i][j]<<endl;
//         }
// }

int main(){
    int arr[10][20]={{1,2,3,4,5},{6,7,8,9,0},{5,4,3,2,1}};
    for(int i=0;i<10;i++)
        for(int j=0;j<20;j++){
            cout<<"element of "<<i<<","<<j<<" is "<<arr[i][j]<<endl;
        }
}
