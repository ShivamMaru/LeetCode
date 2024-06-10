class Solution {
public:
    int first(vector<int>& nums, int n, int target){
        int l= 0;
        int h = n-1;
        int ans = -1;

        while(l<=h){

            int mid = (l+(h-l)/2);

            if(nums[mid] == target){
                ans = mid;
                h = mid-1;
            }
            else if(nums[mid] > target)
                h = mid-1;
            else
                l = mid+1;
        }

        return ans;
    }

    int second(vector<int>& nums, int n, int target){
        int l= 0;
        int h = n-1;
        int ans = -1;

        while(l<=h){

            int mid = (l+(h-l)/2);

            if(nums[mid] == target){
                ans = mid;
                l = mid+1;
            }
            else if(nums[mid]> target)
                h = mid-1;
            else
                l = mid+1;
        }

        return ans;
    }







    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int f  = first(nums , n ,target);
        int s = second(nums , n , target);
        return {f , s};
    }
};