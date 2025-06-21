#include<iostream>
using namespace std;
//int main(){
//	int base;
//	int power;
//		int pow=1;
//	cin>>base;
//	cin>>power;
//	for(int i=0;i<power;i++){
//		pow*=base;
//	}
//	cout<<pow;
//}


//using recursion
int powerofnum(int base,int power){
	if(power==0){
		return 1;
	}else{
		return base*powerofnum(base,power-1);
	}
}
int main(){
	int base;
	int power;
		
	cin>>base;
	cin>>power;

	cout<<powerofnum(base,power);
	
}
