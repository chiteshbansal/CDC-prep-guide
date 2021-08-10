#include<iostream>

#include<string>

using namespace std;
void swap(string &str,int i,int j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    return;
}
void print_permutations(string str,int i){
    if(i==str.length()-1){
        cout << str << " " << endl;
    }
    for(int j = i ; j < str.length(); j++){
        swap(str,i,j);
        print_permutations(str,i+1);
        swap(str,i,j);
    }
}
int main(){

    cout <<"Enter the string " << endl;
    string str;
    cin >> str;
    print_permutations(str,0);
}