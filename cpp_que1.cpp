#include<iostream>
using namespace std;

class Employee
{
    public:
        int workHour, basicSal, addSal=0, addWork=0, sal;
        
        void getInfo()
        {
            cout<<"Enter Employee salary - "<<endl;
            cin>>basicSal;
            cout<<"Enter working hours of Employee per day - "<<endl;
            cin>>workHour;
        }
        
        int AddSal(int basicSal)
        {
            if(basicSal<500)
            {
                addSal = basicSal+10;
            }
            else
            {
                addSal = basicSal + 0;
            }
            return 0; 
        }
        
        int AddWork(int workHour, int addSal)
        {
            if(workHour>6)
            {
                addWork = addSal+5;
            }
            else
            {
                addWork = 0;
            }
            return 0;
        }
        
        int output(int addSal, int addWork)
        {
            int sal;
            if(addWork==0)
            {
                sal=addSal;
            }
            else
            {
                sal=addWork;
            }
            cout<<"\nFinal salary $\n"<<sal<<endl;
            return 0;
        }
};


int main()
{
    Employee e1;
    e1.getInfo();
    e1.AddSal(e1.basicSal);
    e1.AddWork(e1.workHour, e1.addSal);
    e1.output(e1.addSal, e1.addWork);
}

