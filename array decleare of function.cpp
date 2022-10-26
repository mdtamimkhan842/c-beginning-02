/*#include <iostream>
using namespace std;
int main ()
{

    int i, n;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (i=0; i<n; i++)
    {
        cout <<arr[i]<<" ";
    }

    return 0;
}*/


#include <iostream>
using namespace std;
void arraycalling(int arr[])
{
    int i ;
    for (i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main ()
{

    int i, n;
    cin>>n;
    int arr[5];
    for (i=0; i<5; i++)
    {
        cin>>arr[i];
          arraycalling(arr);

    }


    return 0;
}

