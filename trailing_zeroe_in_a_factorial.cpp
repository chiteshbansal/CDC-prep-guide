#include<iostream>
#include<math.h>
using namespace std;

// Number of trailing zeroes in a factorial

// Iterative method 
//  Auxilliary space Complexitiy -- theta(1)
//  Time complexity --- theta(n)

int interative__numTrailingZeroes(int num){
    // This method overflows after 10-12! due to the size of the factorial value 
    // So we have a better approach
    int factorial = 1;
    //calculating the factorial first 
    for(int i = 2 ;i<=num;i++){
        factorial *=i;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;
    int num_of_zeroes = 0;
    // calculating the number of zeroes
    while(factorial%10==0){
        num_of_zeroes++;
        factorial/=10;
    }
    return num_of_zeroes;

}

// Better approach no overflow
//  Auxilliary space Complexitiy -- theta(1)
//  Time complexity --- theta(log(n) base 5)
// 5^k < n  k <log10(n)
int improved__numTrailingZeroes(int num){
    int num_of_zeroes = 0 ;
    for(int i = 5 ; i <= num ; i = i*5){
        num_of_zeroes += floor(num/i);
    }
    return num_of_zeroes;
}
int main(){
    int number ;
    cout << "Enter the number ." << endl;
    cin >> number;

    //cout << "Iterative method--- " << interative__numTrailingZeroes(number) << endl;

    cout << "Better method ----" << improved__numTrailingZeroes(number) << endl;
    return 0;

}