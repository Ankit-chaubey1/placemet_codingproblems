

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int>result;
        int maxright=arr[n-1];
        result.push_back(maxright);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxright){
                maxright=arr[i];
                result.push_back(maxright);
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
