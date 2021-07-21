#include<iostream>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;


// naive method 
// time complexity -- O(n)

void divisors(int n){
    for(int i = 1 ;i <= n ; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}
// optimized method
// unordered manner
// time complexity -- O(sqrt(n))
void divisors_optimized(int n){
    for(int i = 1; i*i <= n ;i++){
        if(n % i == 0){
            cout << i << " ";
            if(i != n/i){
            cout << n/i << " ";
        }
        }
        
    }
}

// optimized method
// ordered manner
// time complexity -- O(sqrt(n))
void divisors_optimized_ordered(int n){
    int i;
    for( i = 1; i*i <= n ;i++){
        if(n % i == 0){
            cout << i << " ";
        }
        
    }
    for(; i >= 1 ;i-- ){
        if(n % i == 0){
            cout << n/i << " ";
        }
    }
}

int main(){
    cout << "Enter the number." << endl;
    int num;
    cin >> num ;
    divisors_optimized_ordered(num);
    return 0;
}