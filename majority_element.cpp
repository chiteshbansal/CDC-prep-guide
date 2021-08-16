#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* 
    Code to find the index of the element  that is present more that n/2 times in the array 
    if no element is in majoriity then we print -1
*/
// this returns the index of the 
// potential element that can be majority element
// using moore's algorithm
int findMajority(vector<int> arr){
    int res = 0;int count = 1;
    for(int i = 1; i<arr.size();i++){
        if(arr[res] == arr[i]){
            count++;
        }else count--;
        if(count==0){
            res = i;
            count = 1;
        }
    }
    count = 0;
    for(int i =0 ;i<arr.size();i++){
        if(arr[res] == arr[i]){
            count++;
        }
    }
    int n = arr.size();
    if(count<=n/2){
        res = -1;
    }
    return res;
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

    cout <<findMajority(v);
    return 0;
}