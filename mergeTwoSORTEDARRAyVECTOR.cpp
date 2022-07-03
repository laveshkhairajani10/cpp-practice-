#include<iostream>
#include<vector>
using namespace std;

void merge (vector <int>&nums1 , int n , vector<int>&nums2 , int m ){
int i =0; 
int j =0;
while (i < n && j < m){
    if(nums1[i] <= nums2[j]){
        nums1[i] =nums1[i];
    }
    else{
        nums1[i]= nums2[j];
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

int main (){
int arr1[5] = {1, 3, 5, 0 ,0 };
    int arr2[2] = {2, 4};
    merge(arr1 ,5 ,arr2 ,2);
    print(arr1 , 5);

}

