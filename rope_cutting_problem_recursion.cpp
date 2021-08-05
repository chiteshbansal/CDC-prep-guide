#include<iostream>
#include<algorithm>
using namespace std;

// time complexity -- O(3^n);
// space complexity -- O(n);
int max_rope_parts(int length,int a , int b , int c){
    if(length == 0) return 0;
    if(length < 0) return -1;

    int ans1 = max_rope_parts(length -a,a,b,c);
    int ans2 = max_rope_parts(length -b,a,b,c);
    int ans3 = max_rope_parts(length -c,a,b,c);
    int res = max({ans1,ans2,ans3});
    if(res == -1) return -1;
    return res + 1;
}
int main(){
    cout << "Enter the length of the rope" << endl;
    int length ;
    cin >> length ;
    cout << "Enter the parts size of the rope" << endl;
    int a , b , c;
    cin >> a >> b >> c;
    cout << max_rope_parts(length,a,b,c);
    return 0;
}