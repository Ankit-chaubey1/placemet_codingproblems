//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	int count=0;
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]==arr[j]){
//				count++;
//			}
//		}
//	}
//	if(count>1){
//		cout<<"true";
//	}else{
//	cout<<"false";
//	}
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	int count=0;
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]==arr[j]){
//				count++;
//			}
//		}
//	}
//	int term=n/2;
//	if(count>term){
//		cout<<arr[term];
//	}else {
//		cout<<"not found";
//	}
//}



//two sum problem
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
int target;
cin>>target;

int left=0;
int right=n-1;
while(left<right){
	int sum=arr[left]+arr[right];
	if(sum==target){
		cout<<left<<" "<<right;
	
	}
	else if(sum<target){
		left++;
	}else{
		right--;
	}
}
cout<<"not found";

}

