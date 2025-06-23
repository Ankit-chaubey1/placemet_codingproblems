#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxnumber=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>maxnumber){
			maxnumber=arr[i];
		}
	}
	cout<<maxnumber;
}
