#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n<3){
		
		return -1;
	}
	int minnumber=INT_MAX;
	int secondmin=INT_MAX;
	int thirdmin=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<minnumber){
			secondmin=minnumber;
			thirdmin=secondmin;
			minnumber=arr[i];
			
			
		}else if(arr[i]>minnumber && arr[i]<secondmin){
			thirdmin=secondmin;
			secondmin=arr[i];
		}else if(arr[i]>secondmin && arr[i]<thirdmin){
			thirdmin=arr[i];
		}
	}
		
	cout<<thirdmin;
}
