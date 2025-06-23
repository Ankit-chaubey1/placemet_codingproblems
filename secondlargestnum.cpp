#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int largest=INT_MIN;
	int secondlargest=INT_MIN;
	int thirdlargest=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			thirdlargest=secondlargest;
			secondlargest=largest;
			largest=arr[i];
		}else if(arr[i]<largest && arr[i]>secondlargest){
			thirdlargest=secondlargest;
				secondlargest=arr[i];
		}else if(arr[i]<secondlargest && arr[i]>thirdlargest){
			thirdlargest=arr[i];
		}
	}
	cout<<largest<<endl;
	cout<<secondlargest<<endl;
	cout<<thirdlargest;
}
