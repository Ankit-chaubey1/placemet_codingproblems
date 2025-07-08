class Solution {

    int missingNum(int arr[]) {

        int n=arr.length+1;

        Arrays.sort(arr);

        for(int i=0;i<n-1;i++){

            if(arr[i]!=i+1){

                return i+1;

            }

        }

        return n;

    }

}

//[1,2,4,5]
//return 3
//[1]
//return 2
