#include<iostream>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
//LCM
// naive method

int lcm(int a,int b){
    // min value of the lcm is max of two numbers
    int LCM = max(a,b);
    while(1){
        if(LCM%a==0 && LCM%b == 0){
            return LCM;
        }
        LCM++;
    }
}

// Optimized approach
// time complexity -- O(log(min(a,b)))

int gcd (int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int optimized_lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    cout << "Enter the numbers." << endl;
    int a, b;
    cin >> a >> b;
    cout << optimized_lcm(a,b) << endl;
    return 0;
}