#include <iostream>
using namespace std;

class student
{
public:
    const int admissionfee;
    const int examfee;
    int id;
    student(int x, int y, int z)
        : admissionfee(x), examfee(y)
    {
        cout<<admissionfee<<endl;
        cout<<examfee<<endl;
        id = z;
        cout<<"id is :"<<id<<endl;
    }
};
int main()
{
    student ob(10000, 5000, 102);

    return 0;
}
