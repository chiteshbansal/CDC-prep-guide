#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<math.h>
#include<algorithm>
using namespace  std;

//GCD brute force approach
// time complexity --- theta(min(a,b))
int naive_gcd(int a,int b){
    // maximum value of gcd can be the minimum of a,b
    int gcd = min(a,b);
    while(gcd>0){
        // gcd divides both the numbers 
        if(a%gcd==0 && b%gcd==0)
            break; 
        else 
            gcd--;
    }
    return gcd;
}
int euclidean_gcd(int a,int b){
    while(a!=b){
        if(a>b)
            a = a-b;
        else 
            b = b-a;
    }
    return a;
}
// Improved euclidean gcd algo
int improved_euclidean_gcd(int a,int b){
    if(b==0)
        return a;
    return improved_euclidean_gcd(b,a%b);
}
int main(){
    int a,b;
    cout << "Enter the numbers a and b." << endl;
    cin >> a >> b;
    cout << "Gcd of " << a << " and " << b << " is " << naive_gcd(a,b) << " " << improved_euclidean_gcd(a,b) << endl;
    return 0;
}
