#include<iostream>
using namespace std;
class Area {
    public:
    int length;
    int width;
    Area() {
        length = 0;
        width = 0;
    }   
    Area(int length,int w) {
        this->length = length;
        width = w;
    }
    void display() {
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
    };
    int main() {
        Area a1;
        cout<<"Default constructor is called"<<endl;
        a1.display();
        cout<<endl;
        Area a2(10,5);
        cout<<"Parameterized constructor is called"<<endl;
        a2.display();
    
        return 0;
    }       
};