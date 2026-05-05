#include<iostream>
using namespace std;
int def(int a,int b=4){
    int c=a+b;
    return c;
}
int main()
{
    cout<<def(3)<<endl;
    cout<<def(3,5)<<endl;
    return 0;
}