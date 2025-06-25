//reverseWords2
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string word;
	getline(cin,word);

	for(int i=0;i<word.size();i++){
		string rev="";
		while(i<word.size() && word[i]!=' '){
			rev+=word[i];
			i++;
			
		}
		reverse(rev.begin(),rev.end());
		
		cout<<rev<<" ";
	}
	
} 
