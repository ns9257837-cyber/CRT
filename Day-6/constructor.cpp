#include<iostream>
using namespace std;    
class Student{
    public:
    string name;
    int RollNo;
Student()
{
    name="John";
    RollNo=101;
}
void show()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<RollNo<<endl;
    cout<<"Default constructor is called"<<endl;
}
};
int main(){
    Student s1;
    s1.show();
    return 0;
}