#include <iostream>
using namespace std;
int main()
{
    int n, i, fibonacci, first=0, second=1;
    cin>>n;
    for(i=0; i<=n; i++)
    {
        if (n<=1)
        {
            cout<<i<<endl;
        }
        if(n>=2)
        {
            fibonacci= first+second;
            first = second;
            second = fibonacci;
            cout<<second<<endl;

        }
    }


    return 0;
}
