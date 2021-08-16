#include<iostream>
#include<vector>
using namespace std;
// naive approach
// time complexity -- O(n2)
void Swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
void rotate_by_1(vector<int> &v){
    int n = v.size(); 
    int temp = v[0];
    for(int i = 1; i < n ;i++){
        v[i-1] = v[i];
    }
    v[n-1]= temp;
}
void print_array(vector<int> arr){
    for(int i = 0 ;i < arr.size() ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
} 
void reverse_array(vector<int> &arr,int start,int end){
    while(start < end ){
        arr[start] = arr[start]^arr[end];
        arr[end]  = arr[start]^arr[end];
        arr[start] = arr[start]^arr[end];
        start++;
        end--;
    }
}
void rotate_by_d(vector<int> &v, int d){
    reverse_array(v,0,d-1);
    reverse_array(v,d,v.size()-1);
    reverse_array(v,0,v.size() -1 );
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
            rotate_by_d(v,2);
        print_array(v);
}