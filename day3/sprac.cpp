#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isAnagram(string str1, string str2){
    if (str1.length() != str2.length()){
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}
int main(){
    string word1, word2;
    cout<< "Enter Word1: ";
    cin>> word1;
    cout<< "Enter word2: ";
    cin>> word2;
    if (isAnagram(word1, word2)){
        cout<<word1<< " and "<<word2<< " are anagrams!"<<endl;
    }else{
        cout<<word1<< " and "<<word2<< " are not anagrams!"<< endl;
    }
}

