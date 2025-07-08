class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        
       int n = arr.size();

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

        return false;
    }
};
