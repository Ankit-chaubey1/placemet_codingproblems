//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string word;
//	getline(cin,word);
//	cout<<word;
//	/*problem statement
//	if input is abeiced
//	output      VCVCVC
//	if inut is appei
//	output is  VCV
//	*/
//	
//	string vowels="aeiou";
//	for(auto i:word){
//		
//	}
//}


#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    string vowels = "aeiouAEIOU";
    return vowels.find(ch) != string::npos;
}

int main() {
    string s;
    getline(cin,s);

    string result = "";

    for (char ch : s) {
        char symbol = isVowel(ch) ? 'V' : 'C';
        if (result.empty() || result.back() != symbol) {
            result += symbol;
        }
    }

    cout << result << endl;

    return 0;
}


/*
sample case
?? Test Case 1:
Input: abeiced
Output: VCVCVC

?? Test Case 2:
Input: appei
Output: VCV
*/

