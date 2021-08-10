#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char A,char B,char C){
    if(n==1){
        cout << "Move 1 from " <<  A << " to " << C << endl;
        return;
    }
    tower_of_hanoi(n-1,A,C,B);
    cout << "Move " << n << " from "<< A << " to " << C << endl;
    tower_of_hanoi(n-1,B,A,C);
}
int main(){
    cout << "Enter the number of towers" << endl;
    int n;
    cin >> n;
    tower_of_hanoi(n,'A','B','C');
    return 0;
}