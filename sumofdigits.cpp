#include<iostream>;
using namespace std;
//int main(){
//	int num;
//	cin>>num;
//	int sum=0;
//	while(num>0){
//		int rem=num%10;
//		sum+=rem;
//		num/=10;
//	}
//	cout<<sum;
//}



//sumofdigits using recursion

int sumofdigits(int num,int sum=0){
	int rem=num%10;
	if(num==0){
		return sum;
	}
	else{
		return sumofdigits(num/10,sum+rem);
	}
}

int main(){
	int num;
	cin>>num;
	
	cout<<sumofdigits(num);
}
