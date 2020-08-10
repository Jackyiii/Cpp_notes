#include <iostream>
using namespace std;

struct Circle{
    int radius;
    int height;
    double girth;
    double area;
    double volume;
} variableA,variableB,
*pointerA, *pointerB=new struct Circle;

int main(){
    variableA.radius=1;
    variableB.radius=2;
    cout<<variableA.radius<<endl;
    cout<<variableB.radius<<endl;
    struct Circle varC;
    varC.radius=3;
    cout<<varC.radius<<endl;
    pointerA=new struct Circle;
    pointerA->radius=40;
    pointerB->radius=50;
    struct Circle *pointerC=new struct Circle;
    pointerC->radius=70;

    return 0;
}

