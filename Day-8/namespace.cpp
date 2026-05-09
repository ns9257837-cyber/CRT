#include<iostream>
using namespace std;
namespace Virat
{
    void show()
    {
        cout << "he is part of RCB" << endl;
    }
    namespace Rohit{
        void show(){
            cout << "he is part of MI" << endl;
        }
    }
    int main()
    {
        Virat::show();
        Rohit::show();
        return 0;
    }
}