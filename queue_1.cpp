#include <iostream>
using namespace std;
template <typename t>
class queue{
    t *arr;
    int cap;
    int ind;
    int ft;
    int siz;
    public:
    queue(){
        ind=0;
        ft=-1;
        cap=5;
        siz=0;
        arr=new t[cap];
    }
    int size(){
        return siz;
    }
    bool empty(){
        return siz==0;
    }
    void push(t data){
        if(ft==-1){
            ft=0;
        }
        if( siz==cap){
            t new_arr[2*cap];
            for(int i=ft;i<cap;i++){
                new_arr[i-ft]=arr[i];
            }
            if(ft>0){
            for(int i=0;i<ft;i++){
                new_arr[i+cap-ft]=arr[i];
            }
            }
            cap=2*cap;
            delete []arr;
            arr=new_arr;
            ft=0;
            ind=cap;
        }
        arr[ind]=data;
        ind=(ind+1)%cap;
        siz++;
        return;
    }
    void pop(){
        if(empty()){
            cout<<"queue is empty"<<endl;
            return;
        }  
        ft=(ft+1)%cap;
        siz--;
        return;
    }
    t top(){
        if(empty()){
            cout<<"queue is empty"<<endl;
            return 0;
        }
        return arr[ft];
    }

};
int main()
{
    queue<int> s;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    // cout<<s.empty()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    // cout<<s.size()<<endl;
    s.pop();
    // cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    // cout<<s.size()<<endl;
    s.pop();
}