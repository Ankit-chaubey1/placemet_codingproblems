class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int> freq;
        for(int i:arr){
            freq[i]++;
        }
        vector<int>final(n,-1);
        for(int i=0;i<n;i++){
            //if(freq[i]> rest elements freq then return that number else return -1)
            for(int j=i+1;j<n;j++){
                if(freq[arr[j]]>freq[arr[i]]){
                    final[i]=arr[j];
                    break;
                }
            }
            
        }
        return final;
    }
};


/*
Input: arr[] = [2, 1, 1, 3, 2, 1]
Output: [1, -1, -1, 2, 1, -1]
Explanation: Frequencies: 1 ? 3 times, 2 ? 2 times, 3 ? 1 time.
For arr[0] = 2, the next element 1 has a higher frequency ? 1.
For arr[1] and arr[2], no element to the right has a higher frequency ? -1.
For arr[3] = 3, the next element 2 has a higher frequency ? 2.
For arr[4] = 2, the next element 1 has a higher frequency ? 1.
For arr[5] = 1, no elements to the right ? -1.
*/
