#include <bits/stdc++.h>
using namespace std;

void cyclic (int arr[] , int n ){
{  
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i-1]; 
    arr[0] = x;

    
}

}
void print(int arr[] , int n ){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main (){
    int arr[5] = {1,2,3,4,5};
    cyclic(arr , 5);
     print(arr , 5);
}