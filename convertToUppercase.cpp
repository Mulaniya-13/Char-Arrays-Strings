#include<iostream>
#include<cstring>
using namespace std;

//uppercase
// void toUpper(char word[],int n){
//       for(int i=0;i<n;i++){
//         char ch=word[i];
//         if(ch>='A' && ch<='Z'){ //Upper Case
//             continue;
//         }else{ //lower case
//             word[i]=ch-'a'+'A';
//         }
//       }
// }

//lowercase
void toLower(char word[],int n){
     for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }else{
            word[i]=ch-'A'+'a';
        }
     }
}

int main(){
    char word[]="ApPle";
    // toUpper(word,strlen(word));
    toLower(word,strlen(word));
    cout<<word<<endl;
    return 0;
}