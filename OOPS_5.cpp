#include<iostream>
#include<algorithm>
using namespace std;

class fraction{
    public:
    int numi,deno;
    static int count;
    fraction(int numi,int deno):numi(numi),deno(deno){
        //count++;
        simplify();
        // print();
    }
    void simplify(){
        int gcd=1;
        for(int i=1;i<=min(numi,deno);i++){
            if(numi%i==0 && deno%i==0){
                gcd=i;
            }
        }
        numi=numi/gcd;
        deno=deno/gcd;
    }
    void print() const{
        cout<</*count*/" fraction is "<<numi<<"/"<<deno<<endl;
    }
    fraction operator+(fraction const &f){
        int a,b;
        a=numi*f.deno+f.numi*deno;
        b=deno*f.deno;
        fraction fnew(a,b);
        fnew.simplify();
        return fnew;
    }
    fraction operator-(fraction const &f){
        int a,b;
        a=numi*f.deno-f.numi*deno;
        b=deno*f.deno;
        fraction fnew(a,b);
        fnew.simplify();
        return fnew;
    }
    fraction operator++(int){
        fraction fnew(numi,deno);
        this->numi=numi+deno;
        fnew.simplify();
        return fnew;
    }
    fraction& operator++(){
        numi=numi+deno;
        simplify();
        return *this;
    }
    fraction operator=(fraction const &f){
        numi=f.numi;
        deno=f.deno;
        simplify();
        return *this;
    }
    fraction operator*(fraction const &f){
        int a,b;
        a=numi*f.numi;
        b=deno*f.deno;
        fraction fnew(a,b);
        fnew.simplify();
        return fnew;
    }
};

int fraction::count=0;

int main(){
    fraction f1(4,2);
    fraction f2(8,4);
    f1.print();
    f2.print();
    // f1=f1+f2; 
    // fraction f3=f1+f2;
    // f1=f1*f2; 
    // fraction f4=f1*f2;
    // f1-f2; 
    // fraction f5=f1++;
    // f1++; //same as f1=f1+1;
    // f2++; 
    // ++f2;
    // ++(++f1);
    // fraction f6=++(++f1);
    // f1.print();
    // f2.print();
    // f3.print();
    // f4.print();
    // f5.print();
    // f6.print();
    // f1.numi=14;
    // f1.print();
    // f2.print();
}