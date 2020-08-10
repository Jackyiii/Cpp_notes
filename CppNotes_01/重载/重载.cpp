int add(int a,int b){
    return a+b;
}
float  add(float a,float b){
    return a+b;
}
double add (double a, double b){
    return a+b;
}
//重载
//函数模版 没有具体制定函数的类型和返回值
template<typename T>
T add(T a,T b){
    return a+b;
}
int main(){
    add(10,20);
}
