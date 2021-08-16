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
void move_zeroes_toend(vector<int> &v){
    for(int i = 0 ;i < v.size() ; i++){
        if(v[i] == 0){
            for(int j = i+1 ; j < v.size() ; j++){
                if(v[j] != 0){
                    Swap(v[i],v[j]);
                    break;
                }
            }
        }
    }
}
// optimized approach
// time complexity -- O(n)
void move_zeroes_toend_optimized(vector<int> &v){
    int count = 0;
    for(int i = 0 ;i <v.size(); i++){
        if(v[i] != 0){
            Swap(v[i],v[count]);
            count++;
        }
    }
}
void print_array(vector<int> arr){
    for(int i = 0 ;i < arr.size() ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
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
            move_zeroes_toend_optimized(v);
        print_array(v);
}