#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a no. to find its factorial : ";
    cin>>a;
    for(int i=a-1; i>=0; i++)
    {
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
        a=a*i;
    }
    cout<<"factorial of the entered no. is : "<<a;
    return 0;
}