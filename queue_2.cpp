#include <iostream>
using namespace std;
// template<typename t>
class node{
    public:
    int data;
    node *next;
    node()
    {
        next = NULL;
    }
    node(int data) : data(data)
    {
        next = NULL;
    }
};
// template<typename t>
class queue
{
    node* head;
    node* tail;
    int siz;
    public:
    queue(){
        head=NULL;
        tail=NULL;
        siz=0;
    }
    int size(){
        return siz;
    }
    void push(int data){
        siz++;
        node * n=new node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }else{
            tail->next=n;
            tail=n;
        }
    }
    void pop(){
        if(head==NULL){
            cout<<"queue is empty"<<endl;
            return ;
        }  
        siz--;
        node * temp=head;
        head=head->next;
        delete temp;
    }
    int top(){
        if(head==NULL){
            cout<<"queue is empty"<<endl;
            return 0;
        }  
        return head->data;
    }
    bool empty(){
        return siz==0;
    }
};

int main(){
    queue s;
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