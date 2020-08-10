#include <iostream>
using  namespace std;
void showVal(int *p);
void passByVal(int val);
void passByPoint(int * pVal);
int * getAddrA();
int * getAddrB();
int * getAddrC();
int * getAddrD(const int * p);

void showVal(int * p){
    cout<<*p<<endl;
}
void passByVal(int val){
    val+=100;
}
void passByPoint(int * pVal){
    *pVal+=100;
}
int * getAddrA(){
    int * p=new int;
    *p=100;
    return p;
}
int * getAddrB(){
    return new int;
}
//局部变量无法返回接收
//int * getAddrC(){
//    int p=10;
//    return &p;
//}
int * getAddrD(const int * p){
    int * q=new int;
    *q=*p;
    *q+=100;
    return q;
}
const int * getAddrE(const int * p){
    int * q=new int;
    *q=*p;
    *q+=100;
    return q;
}  