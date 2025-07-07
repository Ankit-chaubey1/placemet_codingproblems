#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriplet(vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        // Sort the array to use two-pointer approach
        sort(arr.begin(), arr.end());

        // Fix the third element (k)
        for (int k = n - 1; k >= 2; k--) {
            int i = 0, j = k - 1;
            while (i < j) {
                int sum = arr[i] + arr[j];
                if (sum == arr[k]) {
                    count++;
                    i++;
                    j--;
                } else if (sum < arr[k]) {
                    i++;
                } else {
                    j--;
                }
            }
        }

        return count;
    }
};


//sample case
//arr=[1,5,3,2]
//return count 
//1+2=3 count =1
//2+3=5 count 2
//final count=2
