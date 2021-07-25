#include<iostream>
using namespace std;

// time complexity -- theta(n)
void two_odd_occuring(int *arr, int n){
    int XOR = 0;
    int num1 = 0 ;
    int num2 = 0 ;
    for(int i = 0 ; i < n ; i++){
        XOR ^= arr[i] ;
    }
    // finding the first set bit in XOR
    int set_bit = XOR & (~ (XOR-1)) ;
    // traversing the array to separating xor the 
    // elements with the above set_bit present or not
    for(int i = 0 ; i < n ; i++){
        if(set_bit & arr[i]){
            num1 ^= arr[i] ;
        }else{
            num2 ^= arr[i] ;
        }
    }
    cout << num1 << " " << num2 << endl ;
}
int main (){
    cout << "Enter the total number of elements in the array"<<endl;
    int n ;
    cin >> n ;
    cout << "Enter the numbers"<< endl;
    int *arr = new int[n];
    for(int i = 0 ;i < n; i++){
        cin >> arr[i] ;
    }
    two_odd_occuring(arr,n) ;
}