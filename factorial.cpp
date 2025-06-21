#include<iostream>
using namespace std;
//int main(){
//	int num;
//	cin>>num;
//	int fact=1;
//	for(int i=num;i>=1;i--){
//		fact*=i;
//	}
//	cout <<fact;
//}

//factorial using recursion

int factorial(int num){
if(num==0||num==1){
	return 1;
}else{
	return num*factorial(num-1);
}
	
}

int main(){
	int num;
	cin>>num;
int result=	factorial(num);
cout<<result;
}
