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
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }

    student ()
    {
        cout<<"Default constractuor" <<endl;
    }
};

int main()
{
    student hammim;
    student alim(1085,3.8);
    alim.display();

    student tamim(102, 3.6);
    tamim.display();

    return 0;
}
