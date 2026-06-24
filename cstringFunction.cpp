#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100]="xyz";
    char str2[100]="abc";
    // strcpy(str1, "Hello, World!");
    // strcpy(str1,str2);
    // strcat(str1,str2);
    cout<<strcmp(str1,str2);
    // cout << str1 << endl;
    return 0;
}