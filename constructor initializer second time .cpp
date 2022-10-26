#include <iostream>
using namespace std;

class student
{

public:
    int admissionfree;
    int examfree;
    int id;

    student(int x, int y, int z)
        : admissionfree(x), examfree(y)
    {
        cout<<admissionfree<<endl;
        cout<<examfree<<endl;
        id = z;
        cout<< "id is : "<<id<<endl;
    }
};
int main ()
{
    student(100000,5000,101);
    return 0;
}
