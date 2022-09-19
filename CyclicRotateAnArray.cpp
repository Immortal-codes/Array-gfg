#include<iostream>

using namespace std;

int main()
{

    int arr[]={1,2,3,4,5};
    int n=5;
    int count =5;
    int m;
    int i;
    int p;
    int k=2;

    for ( i = 0; i < n; i++)
    {
        p=arr[n-1];
        
    }
    
    for ( i = 0; i < n; i++)
    {
       arr[n-i]=arr[n-i-1];
    }
    for ( i = 0; i < count; i++)
    {
        arr[0]=p;
    }
    for ( i = 0; i < count; i++)
    {
       cout<<arr[i];
    }
    
    
    
    

}