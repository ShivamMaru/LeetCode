class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mh;
        vector<int> v;
        unordered_map<int , int>  mpp;
        
        for(int i=0; i< nums.size(); i++){
            mpp[nums[i]]++;
        }
        
        for(auto it : mpp){
            mh.push({it.second , -it.first});
        }
        
        while(mh.size() > 0){
            int f = mh.top().first;
            int e = -mh.top().second;
            
            for(int i=0; i < f; i++){
                v.push_back(e);
            }
            mh.pop();
        }
        return v;
    }
    
};