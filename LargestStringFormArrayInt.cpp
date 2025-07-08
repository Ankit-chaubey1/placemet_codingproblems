// User function template for C++
class Solution {
  public:
    static bool compare(string a,string b){
           return (a+b)>(b+a);}
    string findLargest(vector<int> &arr) {
        // code here
        
      
        vector<string>store;
        for(int i=0;i<arr.size();i++){
            store.push_back(to_string(arr[i]));
        }
        
        sort(store.begin() , store.end(), compare);
        if(store[0]=="0"){
            return "0";
        }
	    string ans = "";
	    
	    for(auto i:store){
	        ans+=i;
	    } 
	    return ans;
    }
};


/*
Input: arr[] = [3, 30, 34, 5, 9]
Output: "9534330"
Explanation: Given numbers are [3, 30, 34, 5, 9], the arrangement "9534330" gives the largest value.
Input: arr[] = [54, 546, 548, 60]
Output: "6054854654"
Explanation: Given numbers are [54, 546, 548, 60], the arrangement "6054854654" gives the largest value.
*/
