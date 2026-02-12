class Solution {
    public int subarraySum(int[] nums, int k) {
        //this is brute force approach o(n^2)
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            int sum = 0;
            for (int j = i; j < nums.length; j++) {
                sum += nums[j];

                if (sum == k) {
                    count++;
                }
            }

        }
        return count;
    }
}



//2nd way optimal approach

class Solution {
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;
        // store sum of: 0 -> element
        HashMap<Integer,Integer> map = new HashMap<>(); // (sum, count)
        map.put(0, 1); // to match/add when sum == k
        
        int ans = 0;
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            // if 0->idx = sum-k... idx+1->i sum will be k
            if(map.containsKey(sum-k)) ans += map.get(sum-k); // multiple sum-k

            if(map.containsKey(sum)) map.put(sum, map.get(sum)+1);
            else map.put( sum, 1);
        }
        
        return ans;

    }
}
