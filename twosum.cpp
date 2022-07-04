#include <iostream>
using namespace std;

int main()
{

    int temp = 0;
    int arr[4] = {2,7,11,15};
    int n =4; 
    int k =9; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            temp = i + j;
            if (temp == k)
            {
                break;
                cout <<arr[j];
            }
            else
            {
                continue;
                cout <<arr[i];
            }
        }
    }
}