class Solution {
public:

    int binarySearch(vector<int>&nums , int s, int e , int target){

        if(s>e)
            return -1;

        int mid = (s+e)/2;

        if(nums[mid] == target)
            return mid;

        else if(nums[mid] < target)
            return binarySearch(nums , mid+1 , e , target);
        else
            return binarySearch(nums , s , mid-1 , target);
    }






    int search(vector<int>& nums, int target) {

        // int start = 0;
        // int end = nums.size()-1;

        // while(start <= end){

        //     int mid = (start+end)/2;

        //     if(nums[mid] == target)
        //         return mid;
        //     else if(nums[mid] > target)
        //         end = mid-1;
        //     else
        //         start = mid+1;
        // }

        // return -1;

        return binarySearch(nums , 0 , nums.size()-1, target);

        
    }
};