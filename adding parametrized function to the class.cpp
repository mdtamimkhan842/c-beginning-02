#include <iostream>
using namespace std;
class student
{

public:
    int id;
    double gpa;

    void display()
    {
        cout<<id<<endl<<gpa<<endl;
    }
    void setfunction(int x, double y)
    {
        id = x;
        gpa = y;
        //cin>>x>>y;
    }
};

int main()
{
    student alim, tamim;
    alim.setfunction(101,3.4);
    alim.display();

    tamim.setfunction(1023,3.56);

    tamim.display();

    return 0;
}
