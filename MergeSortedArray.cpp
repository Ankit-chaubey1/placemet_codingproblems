class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size();

        vector<int> merged;

        // Step 1: Copy all elements into merged
        for (int i = 0; i < n; i++) merged.push_back(a[i]);
        for (int i = 0; i < m; i++) merged.push_back(b[i]);

        // Step 2: Sort merged array
        sort(merged.begin(), merged.end());

        // Step 3: Fill a with first n elements
        for (int i = 0; i < n; i++) a[i] = merged[i];

        // Step 4: Fill b with last m elements
        for (int i = 0; i < m; i++) b[i] = merged[n + i];
    }
};

