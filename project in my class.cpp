#include <iostream>
using namespace std;
class person
{
    char name[300];
    int id;
    float result;
public:
    void  getdata();
    void display();
};

    void person::getdata()
    {
        cout<<"Enter your name : "<<endl;
        cin>>name;
        cout<<"Enter Your Id : "<<endl;
        cin>>id;
        cout<<" Enter your result : "<<endl;
        cin>>result;
    }
    void person :: display()
    {
        cout<<" Name is : "<<name<<endl;
        cout<<"Id is : "<<id<<endl;
        cout<<"Result is : "<<result<<endl;
    }

int main ()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}
