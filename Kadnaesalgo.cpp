class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int currsum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<n;i++){
            currsum=max(arr[i],currsum+arr[i]);
            maxsum=max(currsum,maxsum);
            }
        
        return maxsum;
    }
};

/*
Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.
Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray [-2] has the largest sum -2.
*/
