class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char,int>roman={
     {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };
    int res=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(roman[s[i]]<roman[s[i+1]]){
           res+=roman[s[i+1]]-roman[s[i]]; 
           i++;
        }else{
            res+=roman[s[i]];
        }
    }
        return res;
    }
};

/*
Input: s = "IX"
Output: 9
Explanation: IX is a Roman symbol which represents 10 – 1 = 9.
Input: s = "XL"
Output: 40
*/
