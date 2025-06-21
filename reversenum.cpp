#include<iostream>
using namespace std;
//int main(){
//	int num;
//	cin>>num;
//	int rev=0;
//	while(num>0){
//		int rem=num%10;
//		rev=rev*10+rem;
//		num/=10;
//	}
//	cout<<rev;
//}


//reverse using recursion


int reversenum(int num,int rev=0){
	int rem=num%10;
	if(num==0){
		return rev;
	}
	else{
		return reversenum(num/10,rev*10+rem);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<reversenum(n)<<endl;
}
