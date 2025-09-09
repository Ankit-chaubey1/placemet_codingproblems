class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
       long  res=1L*(n+1)*(n+2)/2;
       long sum=0;
       for(int i=0;i<n;i++){
           sum+=arr[i];
       }
       long final=res-sum;
       return (int)final;

        
        
    }
};
