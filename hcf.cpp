#include<iostream>
using namespace std;



//int main(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    cout<< a;
//}

//recurssion


int hcf(int a,int b){
	if(b==0){
		return a;
	}else{
		return hcf(b,a%b);
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<hcf(a,b);
}



