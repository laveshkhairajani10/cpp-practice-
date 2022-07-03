#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,1);
    
    v.push_back(3);
   
  v.push_back(3);
    v.push_back(3);
      v.push_back(3);
          v.push_back(3);
      
          v.pop_back();
            
          for(int i : v){
            cout<<i<<endl;
          }
       cout<<"capacity"<<v.capacity()<<endl;
       cout<<"size"<<v.size()<<endl;
       
}