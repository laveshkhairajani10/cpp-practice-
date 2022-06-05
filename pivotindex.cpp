#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{

    int sum = 0;

    int lsum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int rsum = sum;
    for (int j = 0; j < n; j++)
    {
        rsum = rsum -arr[j];

        if (lsum == rsum)

        {
            return j;
            /* code */
        }
        lsum = lsum + arr[j];
    }
    return -1;
}
int main()
{
    int even[6] = {1, 7, 3, 6, 5,6};
    int ans = pivot(even, 6);

    cout << ans;
}