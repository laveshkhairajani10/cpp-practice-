#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, k = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
}
        while (i < n)
        {
            arr3[k++] = arr1[i++];
        }

        while (j < m)
        {
            arr3[k++] = arr2[j++];
        }
    
}
void median (int ans[], int n){
    int temp;
 for (int i = 0; i < n; i++)
 {
  if(n%3==0){
    temp = (ans[i]+)/2;
    cout<<temp<<endl;
    cout<<"inside";

  }
  else{
    cout<<"no";
  }
 }
 

}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {};

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    median(arr3 , 9);

}