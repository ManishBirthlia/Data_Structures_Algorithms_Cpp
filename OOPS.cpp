#include<iostream>
using namespace std;

class student{
    int age=20;
    int rollnumber=30;
public:
    string name;
    void redo(int reage,int reroll){
        age=reage;
        rollnumber=reroll;
    }
    student(){
        cout<<"this is cunstructor "<<endl;
    }
    void get(){
        cout<<age<<" "<<rollnumber<<endl;
    }
    void display(){
        cout<<" name is "<<name<<" and age is "<<age<<" and roll number is "<<rollnumber<<endl;
    }
};

int main(){
    student s1;
    s1.redo(5,4);
    s1.get();
    cin>>s1.name;
    s1.display();

    student *s2=new student;
    s2->get();
    s2->redo(2,3);
    s2->display();

    
    
}