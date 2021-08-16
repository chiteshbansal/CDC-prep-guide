#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longest_subarray(vector<int> v){
    int ans = 1;
    int count = 1;
    int flag = v[0]%2;
    for(int i = 1;i<v.size();i++){
        if(v[i]%2 != flag){
            count++;
            flag = v[i]%2;
            ans = max(count,ans);
        }else{
            count = 1;
        }
    }
    return ans;
}
int main(){
 cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements" << endl;
    vector<int> v;
    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);

    }
    cout << longest_subarray(v);
    return 0;
}