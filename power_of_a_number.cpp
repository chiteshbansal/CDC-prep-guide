#include<iostream>
#include<math.h>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;

// naive method
// time complexity -- theta(pow)
int power_iterative(int num,int pow){
    int answer = 1;
    for(int i = 0 ;i < pow ; i++){
        answer*=num;
    }
    return answer;
}
// optimized approach
// time complexity - theta(log(power))
// space complexity -- theta(log(power))
// recursiver approach
int power_recursive(int num,int power){
    if(power ==0 ){
        return 1;
    }
    int temp = power_recursive(num,power/2);
     temp = temp*temp;
    if(power%2 == 0){
        return temp;
    }else{
        return temp*num;
    }
}
// optimized  approach with less space complexity
// time complexity - theta(log(power))
// space complexity -- theta(1)
// iterative  approach
int power_iterative_opt(int num,int power){
    int res =1 ;
    while(num){
        if(power & 1){
            res = res*num;
        }
        num = num*num;
        power = power >> 1;
    }
    return res;
}
int main(){
    cout << "Enter the number and the power." << endl;
    int num;
    int pow;
    cin >> num >> pow ;
   cout << power_iterative_opt(num,pow);
    return 0;
}