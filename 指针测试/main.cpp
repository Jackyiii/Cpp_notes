#include <iostream>
using namespace  std;
#include "myFunc.h";
int main()
{
    int a =10;
    int * p;
    int b;
    p=&a;
    b=a;
    cout<<"a1="<<a<<endl;
    cout<<"b1="<<b<<endl;
    cout<<"p="<<p<<endl;
    cout<<"*p1="<<*p<<endl;
    cout<<"-------------------"<<endl;
    a=11;
    cout<<"a2="<<a<<endl;
    cout<<"b2="<<b<<endl;
    cout<<"p2="<<p<<endl;
    cout<<"*p2="<<*p<<endl;
    cout<<"-------------------"<<endl;
    *p=12;
    cout<<"a3="<<a<<endl;
    cout<<"b3="<<b<<endl;
    cout<<"p2="<<p<<endl;
    cout<<"*p3="<<*p<<endl;
    int p1=11;
    showVar(&p1);
    int * b11= new int;
    *b11=111;
    showVar(b11);
    int *k=getAddr();
    cout<<*k<<endl;
    cout<<k<<endl;
    return 0;
}
