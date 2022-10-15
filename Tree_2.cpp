#include<iostream>
#include<queue>
#include<vector>
using namespace std;
template<typename t>
class treenode{
    public:
    t data;
    vector<treenode*> children;
    treenode(int data):data(data){
    }
};
void print1(treenode<int>* root){
    cout<<root->data<<endl;
    for(int i=0;i<root->children.size();i++){
        print1(root->children[i]);
    }
}
void print2(treenode<int>* root){
    cout<<"the child of root "<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print2(root->children[i]);
    }
}
void print3(treenode<int>* root ){
    queue<treenode<int>*> q;
    treenode<int>* temp=root;
    q.push(temp);
    while(q.size()!=0){
        temp=q.front();
        q.pop();
        cout<<"the child of root "<<temp->data<<" : ";
        for(int i=0;i<temp->children.size();i++){
            q.push(temp->children[i]);
            cout<<temp->children[i]->data<<",";
        }
        cout<<endl;
    }
}
void input(){
    queue<treenode<int>*> q;
    treenode<int>* root;
    treenode<int>* temp=root;
    q.push(temp);
    int data;
    int n;
    while(q.size()!=0){
        temp=q.front();
        q.pop();
        cin>>temp->data;
        cout<<"How many child "<<temp->data<<"st root has : ";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"childs data of "<<temp->data<<" : ";
            cin>>data;
            treenode<int>* n=new treenode<int>(data);
            q.push(n);
            temp->children.push_back(n);
        }
    }
}
int main(){
    treenode<int>* root=new treenode<int>(1);
    treenode<int>* n2=new treenode<int>(2);
    treenode<int>* n4=new treenode<int>(4);
    treenode<int>* n5=new treenode<int>(5);
    treenode<int>* n3=new treenode<int>(3);
    treenode<int>* n6=new treenode<int>(6);
    treenode<int>* n7=new treenode<int>(7);
    root->children.push_back(n2);
    root->children.push_back(n3);
    n2->children.push_back(n4);
    n2->children.push_back(n5);
    n3->children.push_back(n6);
    n3->children.push_back(n7);
    cout<<"this is 1st method to print"<<endl;
    print1(root);
    cout<<"this is 2nd method to print"<<endl;
    cout<<endl;
    print2(root);
    cout<<"this is 3rd method to print"<<endl;
    cout<<endl;
    print3(root);
}