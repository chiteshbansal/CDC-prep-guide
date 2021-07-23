#include<iostream>
using namespace std;
// time complexity -- theta(number of bits in the integer)
int count_set_bits(int n){
    int res = 0;
    while(n){
        res = res +( n&1);
        n = n>>1;
    }
    return res;
}

// Brian kerningam Algo to count the set bits
int count_set_bits_optimized(int n){
    int res = 0;
    while(n){
        n = n &(n-1);
        res++;
    }
    return res;
}
int main(){
    cout <<"Enter the number ."<< endl;
    int n;
    cin >> n;
    cout << count_set_bits(n)<< endl << count_set_bits_optimized(n) << endl;
}