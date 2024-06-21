class Solution {
public:
    int cnt(vector<int>&nums, int mid){
        int std = 1; long long studentPages = 0;
        for(int i=0; i<nums.size(); i++){

            if(studentPages + nums[i] <= mid){
                studentPages += nums[i];
            }
            else{
                std++;
                studentPages = nums[i];
            }
        }
        return std;
    }

    int splitArray(vector<int>& nums, int k) {

        int maxx = *max_element(nums.begin(),nums.end());
        int sum = accumulate(nums.begin(),nums.end(),0);

        int s = maxx; int e = sum;

        while(s<=e){
            int mid = (s+(e-s)/2);
            int StudentCnt= cnt(nums,mid);
            if(StudentCnt > k)
                s = mid+1;
            else
                e = mid-1;
        }
        return s;
    }
};