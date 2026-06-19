#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char arr[6]={'a','b','c','d','e','\0'}; // Null character is used to indicate the end of the string
    // cout<<arr[0]<<endl; // Output: a
    // cout<<arr[1]<<endl; // Output: b
    // cout<<arr[2]<<endl; // Output: c
    // cout<<arr[3]<<endl; // Output: d
    // cout<<arr[4]<<endl; // Output: e
    // cout<<arr<<endl;
    //"Aashish" //string literal, it is stored in read only memory and cannot be modified
    //"a" // character literal, it is stored in read only memory and cannot be modified
    //"hello" // string literal, it is stored in read only memory and cannot be modified

    //creation && output of character array
    // char work[]="code";
    // char work[10]="code";
    // char work[]={'c','o','d','e','\0'};
    char work[50]={'c','o','d','e','\0'};
    cout<<work<<endl;
    cout<< strlen(work)<<endl;
    return 0;
}