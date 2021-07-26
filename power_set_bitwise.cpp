#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std ;

// time complexity -- theta(n*2^n);

void print_power_set(string str){
    int len = str.length() ;
    int powSize = pow(2,len);

    for(int i = 0 ; i < powSize ; i++){
    
        for(int j = 0 ; j<len ;j++){
            // cout << i << j << endl;
            if((i & (1 << j)) != 0){
                cout << str[j];
            }
        }
        cout << endl;
    }
}
int main(){
    string str ;
    cout << "Enter the string." << endl ;
    cin >> str ;
    print_power_set(str);
    return 0;
}