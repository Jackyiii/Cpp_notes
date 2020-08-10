#include <iostream>
#include<string>
#include<vector>
using  namespace std;
//int max(int a,int b);
//double max(double a, double b);
typedef struct {
    int a;
    int b[1000];
}Bigstruct;
void move(int step=1,int delta=20){

}
void func(int i, int j=10,int k=20,int l=30){

}
int main(int argc,char*argv[]) {
//    max(1,2);
//    max(1.1,2.2);
    std::vector<int> c;
    c.push_back(1);
    c.push_back(2);
    for (int i=0;i<c.size();i++){
        std::cout<<c[i]<<std::endl;
    }
    std::cout << "Hello, World!" << std::endl;
    std::string s;
    s="string";
    s+="zhao";
    std::cout<<s<<std::endl;
    move(2,40);
    move(2);
    move();
    func(10);
    func(10,20);
    return 0;
}
void func(Bigstruct& a){
    //pass;
}
Bigstruct & func(){
    //pass;
}
//传引用-别名
//const 不能修改
//引用作为函数返回值
//函数默认参数1.



