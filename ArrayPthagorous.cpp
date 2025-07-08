class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        
     /*  int n = arr.size();

        // Step 1: Square all elements
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] * arr[i];
        }

        // Step 2: Sort the array
        sort(arr.begin(), arr.end());

        // Step 3: Fix one element and use two pointers
        for (int k = n - 1; k >= 2; k--) {
            int i = 0;
            int j = k - 1;

            while (i < j) {
                if (arr[i] + arr[j] == arr[k]) {
                    return true;
                } else if (arr[i] + arr[j] < arr[k]) {
                    i++;
                } else {
                    j--;
                }
            }
        }

        return false;*/
        
        unordered_set<int>sqr;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sqr.insert(arr[i]*arr[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=arr[i]*arr[i];
                int b=arr[j]*arr[j];
                if(sqr.find(a+b)!=sqr.end()){
                    return true;
                }
            }
        }
        return false;
    }
};



//Input: arr[] = [3, 2, 4, 6, 5]
//Output: true
//Explanation: a=3, b=4, and c=5 forms a pythagorean triplet.
//Input: arr[] = [3, 8, 5]
//Output: false
//Explanation: No such triplet possible.
