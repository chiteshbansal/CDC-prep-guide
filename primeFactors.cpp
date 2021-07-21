#include<iostream>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    
    for(int i = 5 ;i*i <= n ;i = i + 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

// Printing the prime factors
// Time complexity -- O(n%3/2*log(n))

void prime_factors(int n){
    // O(sqrt(n))
    if(isPrime(n) || n==1){
        cout << n << endl;
        return ;
    }
    // O(n)
    for(int i = 2 ;i < n ;i++){
        // O(sqrt(n))
        if(isPrime(i)){
            int x = i;
            // O(log(n))
            while(n%x==0){
                cout << i << " ";
                x = x*i;
            }
        }
    }
}

void optimized_prime_factors(int n){
    if(n<1){
        return ;
    }
    if(n==1 || isPrime(n)){
        cout << n << endl;
        return;
    }

    // O(sqrt(n))
    for(int i = 2 ; i*i <= n;i++){
        while(n % i == 0){
            cout << i << " ";
            n = n/i;
        }
    }

    if(n > 1){
        cout << n << endl;
    }
}
void more_optimized_prime_factors(int n){
    if(n<=1){
        return ;
    }
    while(n % 2 == 0){
        cout << 2 << " ";
        n = n/2;
    }
    while(n % 3 == 0){
        cout << 3 << " ";
        n = n/3;
    }

    // O(sqrt(n)) max in case of n is prime number 
    // else less than that 
    for(int i = 5 ;i*i <= n ;i = i + 6){
        while(n % i == 0){
            cout << i << " ";
            n = n /i;
        }
        while(n % (i+2) == 0){
            cout << i + 2 << " " ;
            n = n / (i + 2);
        }
    }

    if(n > 3){
        cout << n << endl;
    }

}
int main(){
    cout << "Enter the number." << endl;
    int num;
    cin >> num ;
    more_optimized_prime_factors(num);
    return 0;
}