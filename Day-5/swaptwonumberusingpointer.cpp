#include<iostream>
using namespace std;
void swapNUM(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    swapNUM(&a,&b);
    cout<<a<<" "<<b<<endl;
 
}