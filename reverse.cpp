// reversing an array after positon
#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void swap(int arr[], int n, int m)
{
    int start = m+1;
    int end = n - 1;
    for (int i = start; i <=n; i++)
    {
        swap(arr[start], arr[end]);
    }
}
int main()
{
    int arr[5] = {10  ,9, 8, 7, 6};
    int n = 5;
    int m = 2;

    swap(arr, 5, 2);
    print(arr, n);
}