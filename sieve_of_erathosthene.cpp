#include<iostream>
#include<math.h>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;


// Best method 
/// 3times much faster than the optimized approach
int isPrime(int n){
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
// Naive approach
// time complexity -- O(n*n^1/2)
void print_primes(int n){
    // O(n)
    for(int i = 2 ; i <= n ; i++ ){
        // O(n^1/2 )
        if(isPrime(i)){
            cout << i << " " ;
        }
    }
}

// Sieve of ertosthenes
void sieve_of_ertosthenes(int n){
    vector<bool> is_Prime(n+1,true);
    for(int i = 2 ; i*i <=n ;i++){
        if(is_Prime[i]){
            for(int j = 2*i ;j<=n; j = j + i){
                is_Prime[j] = false;
            }
        }
    }
    for(int i = 2;i <=n ;i++){
        if(is_Prime[i]){
            cout << i << " ";
        }
    }
}

// improved sieve approach 
// time complexity -- O(nloglogn)
// loglogn is negiligible so it's almost linear 
void sieve_of_ertosthenes_optimized(int n){
    vector<bool> is_Prime(n+1,true);
    for(int i = 2 ; i<=n ;i++){
        if(is_Prime[i]){
            // because we go inside the loop only for prime numbers 
            // to mark their multiples 
            cout << i << " ";
            for(int j = i*i ;j<=n; j = j + i){
                is_Prime[j] = false;
            }
        }
    }

}
int main(){
    cout << "Enter the number." << endl;
    int num;
    cin >> num ;
   print_primes(num);
    return 0;
}