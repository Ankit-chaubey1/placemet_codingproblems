class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>res;
       for(int i:a){
           res.insert(i);
       }
       for(int i:b){
           res.insert(i);
       }
       return vector<int>(res.begin(),res.end());
    }
};

/*
Input: a[] = [1, 2, 3, 2, 1], b[] = [3, 2, 2, 3, 3, 2]
Output: [1, 2, 3]
Explanation: Union set of both the arrays will be 1, 2 and 3.
*/
