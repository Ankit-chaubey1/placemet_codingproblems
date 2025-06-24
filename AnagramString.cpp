//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<unordered_map>
//using namespace std;
//int main(){
//	string input1,input2;
//	getline(cin,input1);
//	getline(cin,input2);
//	
//	//sorting approach 
//	
////	sort(input1.begin(),input1.end());
////	sort(input2.begin(),input2.end());
////	if(input1==input2){
////	cout<<"true" ;
////	}else{
////	cout<<"false" ;	
////	}
//	
//	
//
//
//		
//	
//}

//second approach
#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main() {
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);

    if (input1.length() != input2.length()) {
        cout << "false";
        return 0;
    }

    unordered_map<char, int> freq;

    for (char c : input1) {
        freq[c]++;
    }

    for (char c : input2) {
        freq[c]--;
    }

    for (auto pair : freq) {
        if (pair.second != 0) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}

