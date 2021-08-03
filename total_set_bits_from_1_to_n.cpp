#include<iostream>
using namespace std;

// time complexity -- O(nlogn)

int count_set_bits(int n){
    int i = 0;
    int ans = 0 ;
    while((1<<i)<=n){
        // while loop runs for theta(logn)
        bool k = 0 ;// bit to be checked 
        int change = 1 << i ; // interval for which bit remain unflipped
        for(int j = 0 ; j <= n ; j++){
            ans += k;
            if(change == 1){
                k = !k ; // flipping the bit
                change = 1 << i ;// now again adding the bit 
                // whether it is 0 or 1 change many times
                // means for i = 2 adding k = 0 as well as k = 1 4 times in ans
                // repeating for all numbers till n
            }else {
                change-- ;
            }
        }
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << count_set_bits(n);
}