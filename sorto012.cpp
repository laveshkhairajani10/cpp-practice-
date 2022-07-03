// this is todo 
#include<iostream> 
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
      cout << arr[i]<<"";
    }
    cout << endl;
 
}
void sortOneTwo(int arr[], int n){
      int left =0 , right = n-1;
  while(left< right)
    {
 
    while (arr[left]== 0 && left <right  ){
        left++;
    }
    while (arr[right]== 1 && left<right  )
    {
    right--;
    

    }

    if(left<right)
    swap(arr[left] , arr[right]);

    left++;
    right++;

    }
    

}
int main(){
    int arr[11] =  { 1 ,1, 0,0,0,0,1,1,2,2,1};
    sortOneTwo(arr,11);

    printArray(arr ,11);

}
