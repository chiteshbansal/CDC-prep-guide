#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// naive approach with 2 traversal
void minimum_consecutive_flips(vector<int> v){
    int group_1 = 0;
    int group_0 = 0;
    int curr_group = v[0];
    if(curr_group == 0){
        group_0 = 1;
    }else {
        group_1 =1;
    }
    int i = 1;
    while(i <v.size()){
        if(v[i]!=curr_group){
            curr_group = v[i];
            if(curr_group == 0){
                group_0++;
            }else {
                group_1++;
            }
        }
        i++;
    }
    int flip_group = group_0<=group_1?0:1;
    i = 0;
    int flag = 0;
    while(i<v.size()){
        if(v[i] == flip_group && !flag){
            cout << "FROM " << i << " to " ;
            flag =1;
        }else if(v[i] != flip_group && flag){
            cout << i-1 << endl;
            flag = 0;
        }
        i++;
    }
    if(flag){
        cout << i-1 << endl;
    }
}

// optimized approach (single traversal)
void min_consecutive_flip_op(vector<int> v){
    int group = v[0];
    int n = v.size();
    int i = 1;
    while(i<n){
        if(v[i]!=group){
            group = v[i];
            break;
        }
        i++;
    }
    if(i == n){
        // means all elements are same 
        return;
    }
    int flip_group =group;
    i = 0;
    int flag = 0;
    while(i<v.size()){
        if(v[i] == flip_group && !flag){
            cout << "FROM " << i << " to " ;
            flag =1;
        }else if(v[i] != flip_group && flag){
            cout << i-1 << endl;
            flag = 0;
        }
        i++;
    }
    if(flag){
        cout << i-1 << endl;
    }
}
void print_group_op_less_code(vector<int> arr){
    int n = arr.size();
    for(int i =1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]){
                cout << "From " << i << " to ";
            }else cout << i-1 << endl;
        }
    }
    if(arr[n-1]!=arr[0]){
        cout << n-1 << endl;
    }
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
    //minimum_consecutive_flips(v);
    min_consecutive_flip_op(v);
    print_group_op_less_code(v);
    return 0;
}