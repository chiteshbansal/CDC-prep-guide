#include<iostream>
using namespace std;
void print_binary_equivalent(int n){
    if(n==0){
        cout << "0" << " ";
        return ;
    }

    print_binary_equivalent(n/2);
    cout << n % 2 << " " ;
}
int main(){

    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    print_binary_equivalent(n);
    return 0;

}