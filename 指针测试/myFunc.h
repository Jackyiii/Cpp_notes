#include <iostream>
using namespace  std;

int showVar(int * p);
int * getAddr();
int showVar(int * p){
    cout<<*p<<endl;
}
int * getAddr(){
    int * p=new int;
    *p=100;
    return p;
}
