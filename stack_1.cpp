#include <iostream>
using namespace std;
class node
{
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
class stack{
    node *head = NULL;
    int count = 0;
public:
    void push(int data)
    {
        node *n = new node(data);
        n->next = head;
        head = n;
        count++;
    }
    void pop()
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        count--;
    }
    int top()
    {
        return head->data;
    }
    int size(){
        return count;
    }
    bool empty()
    {
        if (count == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
}