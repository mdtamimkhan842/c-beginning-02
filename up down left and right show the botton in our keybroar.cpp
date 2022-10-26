#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    char c;
    cin>>x>>y;
    while(1)
    {
        cin>>c;
        if (c=='S')
        {
            break;
        }
        else if (c=='U')
        {
            x--;
        }
        else if(c == 'D')
        {
            x++;
        }
        else if(c== 'R')
        {
            y++;
        }
        else if (c == 'L')
        {
            y--;
        }
    }
    cout<<"Final position of the robot is : "<< x << " " << y<<endl;

    return 0;
}
