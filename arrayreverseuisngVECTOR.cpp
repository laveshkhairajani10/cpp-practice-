#include<iostream>
#include<vector>
using namespace std;

vector <int> revese (vector<int> v){
    int s = 0;
    int end = v.size()-1;
    while(s<=end){
        swap(v[s], v[end]);
        s++;
        end--;
 
    }

return v;

}

void print (vector <int> v){
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i] << " ";
    }
    cout<<endl;

    
}
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(5);
    v.push_back(2);
    v.push_back(6);
    
    vector<int> ans = revese(v);

    print(ans);
    return 0;
    
}