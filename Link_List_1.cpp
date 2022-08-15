#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(){
        next=NULL;
    }
    node(int data):data(data){
        next=NULL;
    }
};

node* input(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
        node *n=new node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }else{
            tail->next=n;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
void print(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    node*head=input();
    print(head);
}