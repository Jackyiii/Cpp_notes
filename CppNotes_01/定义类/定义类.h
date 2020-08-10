#include <iostream>
using namespace std;
class Student{
public:
    void print(){
        std::cout<<name<<","<<age<<","<<std::endl;
    };
    int getAge();
private:
    char name[128];
    int age;
    char addr[128];
};
inline int Student::getAge(){
    return age;
}
int main()
{
    Student stu;
    stu.print();
    stu.getAge();
    return 0;
}