#include <iostream>
using namespace std;

int primeno(int, int);

int main()
{
    int num, check;
   cin>>num;
    check = primeno(num, num / 2);
    if (check == 1)
    {
      cout<<"is a prime number"<<endl;
    }
    else
    {
      cout<<"is not a prime number"<<endl;
    }
    return 0;
}

int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }
    }
}
