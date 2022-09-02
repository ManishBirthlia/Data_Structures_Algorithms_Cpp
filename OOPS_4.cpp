#include<iostream>
#include<algorithm>
using namespace std;

class constant{
    int a;
    char const *b=new char[100];
    public:
    constant(int a,char b1[]):a(a),b(b1){
        print();
    }
    void print(){
        cout<<"a = "<<a<<", "<<"b = "<<b<<endl;
    }
};
int main(){
    char name[]="manish";
    constant c1(10,name);
    constant const c2(20,name);
}