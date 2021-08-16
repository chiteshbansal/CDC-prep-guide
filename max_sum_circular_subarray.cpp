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
int minimum_sum_subarray(vector<int> v){
    int curr_min = v[0];
    int final_min = v[0];
    for(int i = 1 ; i< v.size() ; i++){
        curr_min = min(curr_min+v[i],v[i]);
        final_min= min(final_min,curr_min);
    }
    return final_min;
}

int maximum_sum_circular_subarray(vector<int> v){
    int normal_maximum_sum = maximum_sum_subarray(v);
    if(normal_maximum_sum<0){
        return normal_maximum_sum;
        // because max_circular sum become 0 for all negative numbers 
        // so code fails so this code optimizes and solution and handle that case 
    }
    int circular_maximum_sum;
    // circular maximum sum = totalsum-min_sum_subarray;
    int total_sum = 0;
    for(int i = 0 ;i < v.size() ;i++){
        total_sum+=v[i];
    }
    circular_maximum_sum = total_sum -minimum_sum_subarray(v) ;
    return max(circular_maximum_sum,normal_maximum_sum);
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
    cout << maximum_sum_circular_subarray(v);
    return 0;
}