#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print_frequencies(vector<int> arr){
    int curr_ele = arr[0];
    int count = 1;
    int i = 1;
    while(i<arr.size()){
        if(arr[i] == curr_ele){
            count++;
        }else{
            cout << curr_ele << " " << count << endl;
            count = 1;
            curr_ele = arr[i];
        }
        i++;
    }
    cout << curr_ele << " " << count << endl;
    return ;
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
    print_frequencies(v);
    return 0;
}