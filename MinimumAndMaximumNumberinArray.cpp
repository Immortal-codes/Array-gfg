#include<iostream>

using namespace std;

int main()
{
    int arr[]={3, 2, 1, 56, 10000, 167};
    int n=6;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            cout<<arr[i];
        }
        else
        cout<<arr[i+1];
        
    }
    



}