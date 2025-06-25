#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main(){
	string word;
		getline(cin,word);
		
		//1st approach 
//	string newword=word;
//
//	reverse(word.begin(),word.end());
//	if(newword==word){
//		cout<<"palindrome";
//	}else{
//		cout<<"not a palindrome";
//	}


//optimal approach
int i=0;
int j=word.size()-1;
while(i<j){
	if(word[i]!=word[j]){
		cout<<"not a plaindrome";
	return 0;
	}
	i++;
	j--;
	
}
cout<<"palindrome";
return 0;
}
