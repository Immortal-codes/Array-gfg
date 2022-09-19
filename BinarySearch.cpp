#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int k=4;

    int i;
    for ( i = 0; i < 5; i++)
    {
       if (k==arr[i])
       {
        cout<<i<<endl;
        break;
       }
       
    }
    return 0;
    
}