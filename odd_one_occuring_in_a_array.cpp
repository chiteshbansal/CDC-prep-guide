#include<iostream>
using namespace std;

// Optimized approach
// naive one is obvious-- couting number of times for each element using two loops
// time complexity -- theta(n);
// auxiliary space -- theta(1);
void odd_one_occuring(int *arr,int n){

}
int main(){
    cout << "Enter the size of the array"<<endl;
    int n;
    cin >> n;
    cout << "Enter the " << n << " numbers" << endl;
    int result = 0;

    for(int i = 0 ; i < n; i++){
        int x ;
        cin >> x;
        result ^=x;
    }
    cout << "Odd occuring number is " << result;
}