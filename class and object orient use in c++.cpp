#include <iostream>
using namespace std;
class student
{

public:
    int id;
    double gpa;
};

int main()
{
    student alim, tamim;
    alim.id = 101;
    alim.gpa = 3.50;
    cout<<alim.id<<endl<<alim.gpa<<endl;

    tamim.id = 125;
    tamim.gpa = 3.556;
    cout<<tamim.id<<endl<<tamim.gpa<<endl;

    return 0;
}
