#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int vowels=0,consonants=0;
    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);
        if(ch>='a'&&ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels++;
            }else{
                consonants++;
            }
        }
    }
    cout<<"Number of vowels in "<<str<<": "<<vowels<<endl;
    cout<<"Number of consonants in "<<str<<": "<<consonants<<endl;
    return 0;
}