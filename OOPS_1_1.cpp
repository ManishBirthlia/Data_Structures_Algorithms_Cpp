#include<iostream>
using namespace std;

class boy{
    int pan_card=13579;
    int adhaar=123456;
    string gender="male";
    public:
    int age;
    int school_class;
    string name;

    boy(){
        cout<<"Taking infomation of new student"<<endl;
    }
    boy(int age){
        cout<<"Taking infomation of new student with age : "<<age<<endl;
    }
    void basic_info(){
        cout<<"what is your age : ";
        cin>>age;
        cout<<"which is your class : ";
        cin>>school_class;
        cout<<"what is your name : ";
        cin>>name;
    }
    void get_info(){
        cout<<"your name is : "<<name<<endl;
        cout<<"your age is : "<<age<<endl;
        cout<<"your class is : "<<school_class<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"pan card number : "<<pan_card<<endl;
        cout<<"adhaar card number : "<<adhaar<<endl;
    }
};