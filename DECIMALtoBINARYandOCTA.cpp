#include<iostream>
#include<vector>
using namespace std;
int main(){
	int decimal;
	cin>>decimal;
	vector<int>binary;
	vector<int>octa;
	int temp=decimal;
	while(decimal>0){
		binary.push_back(decimal%2);
		decimal/=2;
	}
	while(temp>0){
		octa.push_back(temp%8);
		temp/=8;
	}
	for(int i=binary.size()-1;i>=0;i--){
		cout<<binary[i];
	}
	for(int i=octa.size()-1;i>=0;i--){
		cout<<octa[i];
	}
	
}
