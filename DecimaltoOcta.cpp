#include<iostream>
#include<vector>
using namespace std;
int main(){
	int decimal;
	cin>>decimal;
	vector<int>result;
	while(decimal>0){
		result.push_back(decimal%8);
		decimal/=8;
	}
	for(int i=result.size()-1;i>=0;i--){
		cout<<result[i];
	}
}
