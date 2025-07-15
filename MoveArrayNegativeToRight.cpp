class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        vector<int>temp;
        
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
    }
};


/*
Input : arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]
Output : [7, 9, 10, 11, -5, -3, -4, -1]
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:

*/
