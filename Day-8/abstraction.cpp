#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int balance){
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
void ShowBalance(){
    cout<<"Your current balance is: "<<balance<<endl;
}
};
int main(){
    ATM a(5000);
    a.ShowBalance();
    a.withdraw(2000);
    a.ShowBalance();
}