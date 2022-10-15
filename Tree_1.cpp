#include<iostream>
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
    cout<<"the value of root "<<root->data<<" :";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print1(root->children[i]);
    }
}
int main(){
    treenode<int>* root=new treenode<int>(1);
    treenode<int>* n2=new treenode<int>(2);
    treenode<int>* n3=new treenode<int>(3);
    treenode<int>* n4=new treenode<int>(4);
    root->children.push_back(n2);
    root->children.push_back(n3);
    root->children.push_back(n4);
    print1(root);
    cout<<"next"<<endl;
    print2(root);
}