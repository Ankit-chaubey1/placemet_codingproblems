#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float diesel,distance;
	cout<<"diesel: ";
	cin>>diesel;
	cout<<"distance";
	cin>>distance;
	if(diesel<=0 || distance<=0){
		cout<<"invalid input";
	}
	float dies=(diesel/distance)*100;
	float dis=((distance*0.6214)/(diesel*0.2642));
	
	cout<<fixed<<setprecision(2)<<dies<<endl;
	cout<<fixed<<setprecision(2)<<dis;
}
