#include <iostream>

using namespace std;

int main()
{

    int arr[] = {0, -1, 2, -3, 1};
    int i;
    int j;
    int k ;
    int n=5;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    cout << "true";
                }
            }
        }
    }
}