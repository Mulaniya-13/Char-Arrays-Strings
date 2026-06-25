#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str;
    // getline(cin,str,'.');
    // cout<<str[0]<<endl;
    // cout<<str[1]<<endl;
    // cout<<str[2]<<endl;
    // str="Hello, C++!";
    // cout<<str<<endl;

    //for each loop
    string str="Aashish Mulaniya";
    // for(int i=0;i<str.length();i++){ //dot operator is used to access the length of the string
    //     cout<<str[i]<<" ";
    // }
    // cout<<endl;

    for(char ch:str){ //for each loop
        cout<<ch<<" ";
    }
    return 0;
}