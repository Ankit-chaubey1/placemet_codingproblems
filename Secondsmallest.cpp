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
	int secondmin=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<minnumber){
			secondmin=minnumber;
			minnumber=arr[i];
			
			
		}else if(arr[i]>minnumber && arr[i]<secondmin){
			secondmin=arr[i];
		}
	}
		
	cout<<secondmin;
}
