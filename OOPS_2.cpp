#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:
    complex(int real,int img){
        this->real=real;
        this->img=img;
        display();
    }
    void display(){
        cout<<"Complex Number :"<<real<<" + i"<<img<<endl;
    }
    void display(string c){
        cout<<"Complex Number "<<c<<real<<" + i"<<img<<endl;
    }
    void add(complex const &c2){
        int r=real+c2.real;
        int i=img+c2.img;
        real =r;
        img=i;
    }
    void multiple(complex const &c2){
        int a=real*c2.real-img*c2.img;
        int b=real*c2.img+img*c2.real;
        real=a;
        img=b;
    }

};

int main(){
    complex c1(1,2);
    complex c2(3,4);
    c1.add(c2);
    c1.display("c1 :");
    c2.display("c2 :");

    c1.multiple(c2);
    c1.display("c1 :");
    c2.display("c2 :");
}