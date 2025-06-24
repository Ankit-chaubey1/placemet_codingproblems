#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        string vowels="aeiouAEIOU";
        int left=0;
        int right=s.size()-1;
        while(left<right){
        	//in place of using -1 we can also use string::npos which is best then -1
            while(left<right && vowels.find(s[left])==-1){
                left++;
            }
             while(left<right && vowels.find(s[right])==-1){
                right--;
            }
               swap(s[left],s[right]);
               left++;
               right--;
        }
     
        return s;
    }
};

int main(){
	Solution s;
	string input;
	getline(cin,input);
	string final=s.reverseVowels(input);
	cout<<final;
}
