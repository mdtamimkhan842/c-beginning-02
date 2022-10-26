#include <iostream>
using namespace std;

class employee
{
private :
    int salary;
public:
    void tamim(int s)
    {
        salary = s;
        cout<<salary<<endl;
    }
};
int main ()
{
    employee bdjobs;
    bdjobs.tamim(1000);

    return 0;
}
