#include<iostream>
using namespace std;

int main(){
    char arr[6]={'a','b','c','d','e','\0'}; // Null character is used to indicate the end of the string
    cout<<arr[0]<<endl; // Output: a
    cout<<arr[1]<<endl; // Output: b
    cout<<arr[2]<<endl; // Output: c
    cout<<arr[3]<<endl; // Output: d
    cout<<arr[4]<<endl; // Output: e
    cout<<arr<<endl;
    return 0;
}