// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        string res="";
        unordered_set<char>frq;
      for(auto i: s){
          if(frq.find(i)==frq.end()){
              res+=i;
              frq.insert(i);
          }
      }
      return res;
    }
};


/*
Input: s = "zvvo"
Output: "zvo"
Explanation: Only keep the first occurrence
*/
