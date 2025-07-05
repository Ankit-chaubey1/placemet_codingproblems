#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	
	//traverse stack 
//	while(!s.empty()){
//		cout<<s.top()<<" ";
//		s.pop();
//	}

//return top element
//cout<<s.top();


//check if stack is empty or not
//if(s.empty()){
//	cout<<"stack is empty";
//}else{
//	cout<<"stack is filled";
//}



//return the size of stack
cout<<s.size();

}
