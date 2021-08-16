#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximum_sum_subarray(vector<int> v){
    int curr_max = v[0];
    int final_max = v[0];
    for(int i = 1 ; i< v.size() ; i++){
        curr_max = max(curr_max+v[i],v[i]);
        final_max = max(final_max,curr_max);
    }
    return final_max;
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
    cout << maximum_sum_subarray(v);
    return 0;
}