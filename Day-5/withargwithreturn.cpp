#include<iostream>
using namespace std;
int add(int a,int b){
    cout<<"the sum is "<<a+b<<endl;
}
int main()
{
    int a,b;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
    add(a,b);
    return 0;
}