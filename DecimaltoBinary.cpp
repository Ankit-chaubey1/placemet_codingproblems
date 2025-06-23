#include<iostream>
#include<vector>
using namespace std;
int main(){
	int num;
	cout<<"any decimal number: ";
	cin>>num;
	vector<int>binary;
	while(num>0){
		int rem=num%2;
		binary.push_back(rem);
		num/=2;
	}
	for(int i=binary.size()-1;i>=0;i--){
		cout<<binary[i];
	}
}
