#include <iostream>
//#include <math.h>
using namespace std;

int calculated(int base, int power)
{
    if (power !=0)
        return (base*calculated(base, power-1)); //2*(2*2)//4*(4*7)

    else
        return 1;

}

int main()
{
    int power, base;
    cin>>base>>power;//2 3 4 8
    int result = calculated(base, power);
    cout<<result<<endl;

    return 0;
}
