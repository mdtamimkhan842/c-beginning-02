#include <iostream>
using namespace std;

int fact(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        return x*(x-1);
    }
}
int main()
{
    int x;
    cin>>x;
    fact(x);
    return 0;
}
