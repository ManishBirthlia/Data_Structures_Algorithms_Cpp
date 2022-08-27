#include<iostream>
#include <algorithm>
using namespace std;

class fraction{
    int numi,denomi;
    public:
    fraction(int numi,int denomi){
        this->numi=numi;
        this->denomi=denomi;
    }
    void display(string s){
        cout<<"Fraction Number "<<s<<numi<<"/"<<denomi<<endl;
    }
    void add(fraction const &f2){
        int n=numi*f2.denomi+denomi*f2.numi;
        int d=denomi*f2.denomi;
        int f=__gcd(n,d);
        numi=n/f;
        denomi=d/f;
    }
    void multi(fraction const &f2){
        int a=numi*f2.numi;
        int b=denomi*f2.denomi;
        numi=a;
        denomi=b;
    }
};

int main(){
    fraction f1(1,2);
    fraction f2(3,4);
    f1.display("f1 :");
    f2.display("f2 :");
    f1.add(f2);
    cout<<"after adding "<<endl;
    f1.display("f1 :");
    f2.display("f2 :");
    f1.multi(f2);
    cout<<"after multiplying "<<endl;
    f1.display("f1 :");
    f2.display("f2 :");

}