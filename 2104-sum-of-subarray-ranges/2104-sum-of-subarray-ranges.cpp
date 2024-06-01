class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
        long long sum = 0;
        for(int i=0; i<nums.size(); i++){
             int minn = nums[i];
             int maxx = nums[i];
            for(int j=i; j<nums.size();j++){
               minn = min(minn,nums[j]);
                maxx = max(maxx,nums[j]);
                
                sum += (maxx-minn);
            }
        }
        return sum;
    }
};