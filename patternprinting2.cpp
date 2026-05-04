#include<iostream>
using namespace std;
int main()
{
    int r,n;
    cout<<"enter the no. of rows : ";
    cin>>r>>n;
    for(int i=r; i<=n; i++)
    {
        for(int j=n; j<=r; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}