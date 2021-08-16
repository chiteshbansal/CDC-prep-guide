#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Maximum difference between arr[j] - arr[i] for j>i

// naive approach
// time complexity -- O(n2)

int max_difference_naive(vector<int> arr){
    int max_difference = INT_MIN;
    int n = arr.size();
    for(int i = 0 ;i < n; i++){
        for(int j = i+1 ; j < n ;j++){
            max_difference = max(max_difference,arr[j] - arr[i]);
        }
    }
    return max_difference;
    
}
int max_difference_optimized(vector<int> arr){
    int max_difference = arr[1] - arr[0];
    int min_value = arr[0];
    for(int i = 1 ; i<arr.size() ; i++){
        max_difference = max(max_difference,arr[i] - min_value);
        min_value = min(min_value,arr[i]);
    }
    return max_difference;
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
    cout << max_difference_optimized(v);
    return 0;
}