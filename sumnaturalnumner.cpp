#include<iostream>
using namespace std;
//int main(){
//	int num;
//	cin>>num;
//	int sum=0;
//	for(int i=1;i<=num;i++){
//		sum+=i;
//	}
//	cout<<sum;
//	
//}


//using recursion
int sumnatural(int num,int sum=0){
	if(num==0){
		return sum;
	}else{
		return num+sumnatural(num-1);
	}
}


int main(){
	int num;
	cin>>num;
	
	cout<<sumnatural(num);
	
}
