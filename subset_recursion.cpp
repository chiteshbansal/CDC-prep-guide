#include<iostream>
#include<string>
using namespace std;
void generate_subsets(string str,string curr,int index,int length){
    if(index==length){
        cout << curr << endl;
        return ;
    }
    generate_subsets(str,curr,index+1,length);
    generate_subsets(str,curr + str[index],index+1,length);
    
}
int main(){
    string str;
    cout << "Enter the string" << endl;
    cin >> str;
    generate_subsets(str,"",0,str.length());
    return 0;
}