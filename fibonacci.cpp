#include<iostream>
using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int a=0;
//	int b=1;
//if(n<=1){
//	cout<< 0;
//	return 0 ;
//}
//
//	
//cout<<a<<" "<<b<<" ";
//	for(int i=2;i<n;i++){
//			
//			int c=a+b;
//			cout<<c<<" ";
//		a=b;
//		b=c;
//
//	}
//
//}



//fibo using recursion
int fibonacci(int n){
	if(n==0){
		return 0;
		
	}else if(n==1){
		return 1;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	}
	int main(){
		int n;
		cin>>n;
	for(int i=0;i<n;i++){
			cout<<fibonacci(i)<<" ";
	}
	
	
	}
