#include<iostream>
using namespace std;

class AddAmount
{
public:
    int amount = 50;
    
    AddAmount()
    {
        amount+=0;    
        cout<<"Constructor 1 - "<<amount<<endl;
    }
    AddAmount(int amt)
    {
        amount+=amt;
        cout<<"Contructore 2 - "<<amount<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter amount to be deposited in your piggy bank : ";
    cin>>n;
    AddAmount ad, ad1(n);
}

