#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int cse;
	int ece;
	int mec;
	cin>>cse>>ece>>mec;
	if(cse==0 && ece==0 && mec==0){
		cout<<"no highest num";
	}
	if(cse<0 || ece<0 || mec<0){
		cout<<"invalid input";
	}
//	if(cse==ece && cse>mec){
//		cout<<cse<<" "<<ece;
//	}else if(cse==mec && cse>ece){
//		cout<<cse<<" "<<mec;
//	}else if(ece==mec && ece>cse){
//		cout<<mec<<" "<<ece;
//	}else if(cse>ece && cse>mec){
//		cout<<cse;
//	}else if(ece>cse && ece>mec){
//		cout<<ece;
//	}else{
//		cout<<mec;
//	}
int res=max(cse,max(ece,mec));
if(res==cse){
	cout<<cse;
}
if(res==ece){
	cout<<ece;
	
}
if(res==mec){
	cout<<mec;
}
	return 0;
}
