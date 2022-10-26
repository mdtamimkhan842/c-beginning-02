#include <iostream>
using namespace std;

void square(int n)
{
    int result = n*n;
    cout<<result;
}

int main ()
{
    int n;
    cin>>n;
    square(n);
    return 0;
}
