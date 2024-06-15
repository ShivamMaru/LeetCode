# include<bits/stdc++.h>
class Solution {
public:

    int divide(vector<int>&nums,int mid){
        int sum = 0;

        for(int j=0; j<nums.size(); j++){
            sum += ceil((double)nums[j] / mid);
            }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxx = *max_element(nums.begin(), nums.end());

        int s = 1; int e = maxx;
        int ans;

        

        while(s<=e){

            int mid = (s+(e-s)/2);

        if(divide(nums,mid) <= threshold){
            ans = mid;
            e = mid-1;
        }
        else
            s = mid+1;
        
        }


        return ans;

             
    }

};