#include<iostream>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
//Find whether the number is Prime or not
// Naive method
// time complexity -- O(n)

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i = 2; i < n; i++){
        // cout << "is prime " << i << endl;
        if(n%i==0){
            return false;
        }
    }
    return true;
}
// optimized method 
// time complexity -- O(sqrt(n));

bool optimized_isPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i = 2; i*i <= n; i++ ){
        // cout << i <<endl;
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

// Best method 
/// 3times much faster than the optimized approach
int best_isPrime(int n){
    if(n == 1){
        return false;
    }

    if(n == 2 || n == 3){
        return true;
    }

    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for(int i = 5 ; i*i <= n ;i = i + 6){
        if(n % i ==0 || n % (i+2) == 0){
            return false;
        }
    }
    return true;
}
int main(){
    cout << "Enter the number." << endl;
    int num;
    cin >> num ;
    cout << optimized_isPrime(num) << isPrime(num) << best_isPrime(num) <<  endl;
    return 0;
}