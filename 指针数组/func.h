#include <iostream>
us
void showVal(int *p);
void passByVal(int val);
void passByPoint(int * pVal);
int * getAddrA();
int * getAddrB();
int * getAddrC();

void showVal(int * p){
    cout<<*p<<endl;
}