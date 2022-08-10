#include<iostream>
#include<queue>
using namespace std;
class treenode{
    public:
    int data;
    treenode* left;
    treenode* right;
    treenode(int data):data(data){
        left=NULL;
        right=NULL;
    }
};
treenode* input(){
    int data;
    int n;
    treenode* temp;
    queue<treenode*> q;
    cout<<"Enter the data of root : ";
    cin>>data;
    treenode* root=new treenode(data);
    if(data==-1){
        root=NULL;
    } 
    q.push(root);
    while(!q.empty() && root){
        temp=q.front();
        q.pop();
        cout<<"Enter the data of childs of "<<temp->data<<" : ";
        cin>>data;
        treenode* n1=new treenode(data);
        if(data==-1){
            n1=NULL;
        }
        cin>>data;
        treenode* n2=new treenode(data);
        if(data==-1){
            n2=NULL;
        }
        temp->left=n1;
        temp->right=n2;
        if(n1) q.push(n1);
        if(n2) q.push(n2);
    }
    return root;
}
void print(treenode* root ){
    queue<treenode*> q;
    treenode* temp=root;
    q.push(temp);
    while(q.size()!=0){
        temp=q.front();
        q.pop();
        cout<<"the child of root "<<temp->data<<" : ";
        if(temp->left){
            q.push(temp->left);
            cout<<temp->left->data<<",";
        }
        if(temp->right){
            q.push(temp->right);
            cout<<temp->right->data<<",";
        }
        cout<<endl;
    }
}
int main(){
    treenode* root=input();
    print(root);
}