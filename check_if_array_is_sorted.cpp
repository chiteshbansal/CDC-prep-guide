#include<iostream>
#include<vector>
using namespace std;
// time complexity -- O(n) liner time 
bool isSorted(vector<int> arr){
    for(int i = 1 ; i < arr.size() ; i++){
        if( arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    cout <<"Enter the size of the array" << endl;
    int n ;
    cin >> n ;
    cout << "Enter the elements" << endl;
    vector<int> array;
    for(int i = 0 ; i < n ; i++ ){
        int x;
        cin >> x;
        array.push_back(x);
    }
    cout << isSorted(array);
}