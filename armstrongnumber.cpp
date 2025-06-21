#include<iostream>
using namespace std;
#include<cmath>
//int main(){
//	int num;
//	cin>>num;
//	int sum=0;
//	int originalnum=num;
//	while(originalnum>0){
//		int rem=originalnum%10;
//		sum+=rem*rem*rem;
//		originalnum/=10;
//	}
//	if(sum==num){
//		cout<<"yes";
//	}else{
//		cout<<"no";
//	}
//}


//for n digit
int main(){
	int num;
	cin>>num;
	int sum=0;

	int n=0;
	int temp=num;
	while(temp>0){
		temp/=10;
		n++;
	}
	temp=num;
	while(temp>0){
		int rem=temp%10;
		sum+=pow(rem,n);
		temp/=10;
	}
	if(sum==num){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
