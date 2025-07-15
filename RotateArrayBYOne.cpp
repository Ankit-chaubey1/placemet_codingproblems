// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        int x=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=x;
    }
};

/*
nput: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.
Constraints:
1<=arr.size()<=105
0<=arr[i]<=105

Try more examples
Expected Complexities
Dropdown Icon
Time Complexity: O(n)
Auxiliary Space: O(1)
Topic Tags
Dropdown Icon
Related Articles
Dropdown Icon
Report An Issue
If you are facing any issue on this page. Please let us know.
Output Window
*/
