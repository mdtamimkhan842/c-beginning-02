#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double h, b, area;

    cout<<"enter hight is : ";
    cin>>h;
    cout<<"enter base is: ";
    cin>>b;
    cout<<fixed;
    cout<<setprecision(2);
    area = 0.5*h*b;
    cout<<"Area is : "<<area;

    return 0;
}
