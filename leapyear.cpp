#include<iostream>
using namespace std;
//int main(){
//	int year;
//	cin>>year;
//	if(year%100==0){
//		if(year%400==0){
//			cout<<year<<" is a leap year";
//		}else{
//		cout<<year<<" is not  a leap year";	
//		}
//	}
//	if(year%100!=0){
//		if(year%4==0){
//			cout<<year<<" is a leap year";
//		}else{
//			cout<<year<<" is not a leap year";
//		}
//	}
//}


//optimize way
int main() {
    int year;
    cin >> year;

    if (year % 400 == 0) {
        cout << year << " is a leap year";
    }
    else if (year % 100 == 0) {
        cout << year << " is not a leap year";
    }
    else if (year % 4 == 0) {
        cout << year << " is a leap year";
    }
    else {
        cout << year << " is not a leap year";
    }

    return 0;
}
