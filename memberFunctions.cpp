#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="Aashish Mulaniya c++ & c++";
    cout<<str.length()<<endl;;
    cout<<str[3]<<endl;
    cout<<str.at(3)<<endl;
    cout<<str.substr(1,6)<<endl;
    cout<<str.find("Mulaniya")<<endl;
    cout<<str.find("c++",20)<<endl;
    int idx=str.find("python");
    cout<<idx<<endl;
    return 0;
}