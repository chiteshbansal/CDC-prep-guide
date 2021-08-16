#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_consecutive_ones(vector<int> v){
    int i = 0;
    int n = v.size();
    int max_count = 0;
    int curr_count = 0;
    while(i<n){
        while(v[i] == 1){
            curr_count++;
            i++;
            if(curr_count >max_count){
                max_count = curr_count;
            }
        }
        cout << curr_count << " " << max_count << endl;
        curr_count = 0;
        i++;
    }
    return max_count;
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
    cout << max_consecutive_ones(v);
    return 0;
}