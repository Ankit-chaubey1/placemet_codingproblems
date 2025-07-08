

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        
        vector<int>result;    
        int maxelement=arr[n-1];
        result.push_back(maxelement);
        
        
 
      for(int i=n-2;i>=0;i--){
          if(arr[i]>=maxelement){
              maxelement=arr[i];
              result.push_back(arr[i]);
          }
      }
      reverse(result.begin(),result.end());
      return result;
    }
};



//Input: arr = [16, 17, 4, 3, 5, 2]
//Output: [17, 5, 2]
//Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
