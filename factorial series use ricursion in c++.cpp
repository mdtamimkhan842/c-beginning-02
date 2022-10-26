#include <iostream>
using namespace std;

int fact(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);//5*4*3*2*1
    }
}

int main ()
{
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int factorial = fact(n);
    cout<<factorial<<endl;
    return 0;
}
