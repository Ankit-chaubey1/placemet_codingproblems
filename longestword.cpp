#include<iostream>
#include<sstream>
using namespace std;
int main(){
	string sentence;
	getline(cin,sentence);
	string word,newword="";
	int maxlength=0;
	stringstream ss(sentence);
	while(ss>>word){
		int currentlength=word.length();
		if(currentlength>maxlength){
			maxlength=currentlength;
			newword=word;
		}
		
	}
	cout<<newword;
}
