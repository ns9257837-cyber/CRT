#include<iostream>
using namespace std;
class Cricketers{
    public:
    string name;
    int runs;
    double avg;
    Cricketers(string n,int r,double avg)
    {
        name=n;
        runs=r;
        this->avg=avg;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<avg<<endl;
        cout<<"Parameterized constructor is called"<<endl;
    }
    int main(){
        Cricketers c1("Virat Kohli",12000,58.16);
        c1.show();  
    
        return 0;
    }
};