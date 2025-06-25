#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string word;
    getline(cin, word);

    unordered_map<char, int> freq;

   
    for (char ch : word) {
        freq[ch]++;
    }

bool found =false;
    //  Find the first character with frequency 1
//    for (char ch : word) {
//        if (freq[ch] == 1) {
//            cout << "First non-repeating character: " << ch;
//found=true
//            return 0;
//        }
//}

//all chars with freq 1
 for (char ch : word) {
        if (freq[ch] == 1) {
            cout << "all non-repeating character: " << ch<<" ";
            found=true;
            
        }
}

    // If no such character found
    if(!found){
    	cout << "No non-repeating character found.";
 
    }
    
}

