class Solution {
  public:
    int findElement(vector<int> &arr) {
        // code here
        int n=arr.size();
       int ans=0;
        int maxans=0;
        if(n<3){
            return -1;
        }
        for(int i=1;i<n-1;i++){
            if(arr[i-1]<arr[i] && arr[i]<arr[i+1]){
                ans=arr[i];
            }else{
                maxans=max(maxans,arr[i]);
            }
            
            }
                    
           if(ans>maxans){
               return ans;
           }
        return -1;
        
    }
};

/*
Input: arr = [4, 2, 5, 7]
Output: 5
Explanation: Elements on left of 5 are smaller than 5 and on right of it are greater than 5.
Input: arr = [11, 9, 12]
Output: -1
Explanation: As no element here which we can say smaller in left & greater in right.
*/
