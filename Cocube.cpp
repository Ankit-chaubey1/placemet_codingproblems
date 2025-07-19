#include<iostream>
using namespace std;

int gcd(int i,int num){
	if(num==0){
		return i;
	}else{
	return gcd(num,i%num);
	}
}



int num;
cin>>num;
int pow=1;
for(int i=1;i<=num;i++){
	cout<<gcd(i,num)*(pow*=2)
}
	
}



//take a number input and start loop from 1 to number and return 
//suppose num=6;
/*
gcd(i,num)*(2^1)
gcd(i,num)*(2^2) till num;

*/
