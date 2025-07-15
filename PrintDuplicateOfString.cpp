// C++ Code to print duplicate characters 
// and their counts using Hashing
#include <bits/stdc++.h>
using namespace std;

// Function to print duplicate characters with their count
void printDuplicates(string s) {

    // Hash map to store frequency of each character
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    // Traverse the map and print characters with count > 1
    for (auto it : freq) {
        if (it.second > 1) {
            cout << "['" << it.first << "', " << it.second << "], ";
        }
    }
}

int main() {

    string s = "geeksforgeeks";

    printDuplicates(s);

    return 0;
}
