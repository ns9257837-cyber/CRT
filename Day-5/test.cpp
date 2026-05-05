#include <iostream>
using namespace std;
    int coffeevol(int shots)
    {
        return shots*30;
    }
    int main()
    {
        int shots;
        cout<<"Enter the number of coffee shots: ";
        cin>>shots;
        cout<<"The total volume of coffee is: "<<coffeevol(shots)<<" ml"<<endl;
    return 0;
}
