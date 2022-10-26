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
};

int main()
{
    student alim, tamim;
    alim.id = 101;
    alim.gpa = 3.50;
    alim.display();

    tamim.id = 125;
    tamim.gpa = 3.556;
    tamim.display();

    return 0;
}
