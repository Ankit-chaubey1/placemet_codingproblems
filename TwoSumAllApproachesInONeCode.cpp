class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
/*brute force approach*/
       /* for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};*/
        
   /*two pointer approarch but it would not work here because it is asking for original indices not  the updated one after the sorting

       int low=0;
       int high=nums.size()-1;
       while(low<=high){
        int res=nums[low]+nums[high];
        if(res==target){
            return {low,high};
        }else if(res<target){
            low++;
        }else{
            high--;
        }
       }
       return {};*/
	  
	  
	  
	  /*3rd appraoch  hashmap*/

       unordered_map<int,int>store;
       for(int i=0;i<nums.size();i++){
        int res=target-nums[i];
        if(store.count(res)){
            return {store[res],i};
        }
        store[nums[i]]=i;
       }
       return {};
    }
};     
