#include<iostream>
using namespace std;
int Fact(int x)
{
    if(x==1)
    return 1;

    return x*Fact(x-1);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<Fact(n);
    return 0;
}