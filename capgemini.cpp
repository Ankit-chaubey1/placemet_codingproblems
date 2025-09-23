#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main(){
	int n;
	cin>>n;
//	int arr[n];
vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if((i+1)%2!=0){
			cout<<arr[i]<<" ";
		}
		}
	
}
