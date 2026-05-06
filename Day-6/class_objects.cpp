#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int RollNo;
void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<RollNo<<endl;
}
};
int main(){
    Student s1;
    s1.name="John";
    s1.RollNo=101;
    s1.display();
    return 0;
}
