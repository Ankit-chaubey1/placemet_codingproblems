#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	char c;
	cin>>c;
	
	char ch=tolower(c);
	
	if(!isalpha(ch)){
		cout<<"invalid";
		return 0;
	}
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		cout<<"vowel";
	}else{
		cout<<"consonant";
	}
}
