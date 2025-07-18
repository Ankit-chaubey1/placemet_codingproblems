class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        //      for(int i=0;i<n;i++){
        // for(int j=i+1;j<n;j++){
        //  if(nums[i]==nums[j]){
        //   return nums[i];
        //}
        int slow=nums[0];
        int fast=nums[0];
        do{
        	slow=nums[slow];
        	fast=nums[nums[fast]];
	   
…        } while (slow != fast);
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

/*
Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [3,3,3,3,3]
Output: 3
 
*/
