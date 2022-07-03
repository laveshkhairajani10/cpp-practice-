#include<iostream>
using namespace std;
// swap alter function 
int swapAlter(int arr[], int n ){
     int start = 0;
     int end= n-1;
     while (start <=end){
         swap(arr[start], arr[end]);
         start=+2;
         end=-2;
     }
     return 0;
     }
//print function 
int printArray(int arr[], int n){
     for (int i = 0; i <= n; i++)
     {
     cout<<arr[i]<<endl;
     }
     return 0;
    
}
int main(){
    cout<<"ok";
    int arr[8]= {5,2,9,4,7,6,1,0};
    swapAlter(arr ,8);

    printArray(arr,8);


} // namespace std
