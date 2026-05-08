#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    void setBalance(int balance){
        this->balance=balance;
    }
    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Withdrawal successful. Remaining balance: "<<amount<<endl;
        }
    };
int getBalance(){
    return balance;
}
};
int main(){
    int n;
    cin>>n;
    ATM a;
    a.setBalance(n);
    cout<<"Your current balance is: "<<a.getBalance()<<endl;
    a.withdraw(500);
    cout<<"Your current balance is: "<<a.getBalance()<<endl;
    return 0;
}