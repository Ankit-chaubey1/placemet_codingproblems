#include<iostream>
#include<string>
using namespace std;
#include<unordered_map>
int main(){
	string word;
	getline(cin,word);
	unordered_map<char,int>freq;
	for(char i:word){
		freq[i]++;
	}
	for(auto pair:freq){
		cout<<pair.first<<" "<<pair.second;
	}
}
