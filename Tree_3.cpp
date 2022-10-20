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
treenode<int>* input(){
    queue<treenode<int>*> q;
    int data;
    cout<<"enter root data : ";
    cin>>data;
    treenode<int>*root=new treenode<int>(data);
    treenode<int>* temp=root;
    q.push(temp);
    int n;
    while(q.size()!=0){
        temp=q.front();
        q.pop();
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
    return root;
}
int main(){
    
    treenode<int>* root=input();
    print3(root);
}