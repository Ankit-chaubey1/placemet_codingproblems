#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string word="";
	cin>>word;
//	reverse(word.begin(),word.end());
//	cout<<word;

for(int i=word.size()-1;i>=0;i--){
	cout<<word[i];
}
}
