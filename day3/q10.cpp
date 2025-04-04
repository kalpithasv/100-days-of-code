// program to find the most frequently occurring character in a string without libraries
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    int freq[256] = {0}; 
    int maxFreq = 0; 
    char mostFrequentChar;
    for (char ch : str) {
        freq[ch]++;
        if (freq[ch] > maxFreq) {
            maxFreq = freq[ch];
            mostFrequentChar = ch;
        }
    }

    cout << "Most frequently occurring character: " << mostFrequentChar << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
