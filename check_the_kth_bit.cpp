#include<iostream>
using namespace std;
void kth_bit(int n,int k){
    if((n & (1<<(k-1))) != 0){
        cout << "Kth bit is set in " << n << endl;
    }else {
        cout << "Kth bit is not set in " << n << endl;
    }
}
int main(){
    cout <<"Enter the number and position of the bit to be checked."<< endl;
    int n , k;
    cin >> n >> k;
    kth_bit(n,k);
}