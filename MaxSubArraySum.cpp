int maxsum = INT_MIN;
int currsum = 0;

for (int i = 0; i < n; i++) {
    currsum += arr[i];
    maxsum = max(maxsum, currsum);

    if (currsum < 0) {
        currsum = 0;
    }
}
return maxsum;
//max subarray sum using kadnes algo
//arr = {5, -3, 7, 6, 5}
//return sum=20
