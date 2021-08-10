#include<iostream>
#include<vector>
using namespace std;
// time complexity -- O(n) liner time 
void reverse_array(vector<int> &arr){
    int start = 0;int end = arr.size()-1;
    while(start < end ){
        arr[start] = arr[start]^arr[end];
        arr[end]  = arr[start]^arr[end];
        arr[start] = arr[start]^arr[end];
        start++;
        end--;
    }
}
void print_array(vector<int> arr){
    for(int i = 0 ; i <arr.size() ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
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
    cout << "Old array:" << endl;
    print_array(array);
    cout << "Reversed array:" << endl;
    reverse_array(array);
    print_array(array);
}