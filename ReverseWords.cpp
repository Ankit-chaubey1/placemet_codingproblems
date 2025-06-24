#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string word;
getline(cin,word);
	int n=word.size();
	string final="";
reverse(word.begin(),word.end());

for(int i=0;i<word.size();i++){
	string newword="";
	while(i<n && word[i]!=' '){
		newword+=word[i];
		i++;
	}
	reverse(newword.begin(),newword.end());
	if(newword.length()>0){
		final+=" "+newword;
	}
	
}
cout<<final.substr(1);

}




