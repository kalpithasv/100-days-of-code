//that takes input of sentence and prints the number of vowels in it by seeing the spaces btwn words
#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin,sentence);
    int wordcount=0;
    for(int i=0;i<sentence.length();i++){
        if(sentence[i] == ' '){
            wordcount++;
        }
    }
    wordcount++;
    cout<<"Number of words in the sentence: "<<wordcount<<endl;
    return 0;

}