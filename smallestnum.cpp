#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int minnumber=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<minnumber){
			minnumber=arr[i];
		}
	}
	cout<<minnumber;
}
