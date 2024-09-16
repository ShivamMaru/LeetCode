#include<bits/stdc++.h>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mpp;
        vector<int> v;
        priority_queue<pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int>>> minh;
        
        for(int i=0; i< nums.size(); i++){
            mpp[nums[i]]++;
        }
        
        for(auto it : mpp){
            minh.push({it.second, it.first});
            
            if(minh.size() > k)
                minh.pop();
        }
        
        while(minh.size()>0){
            v.push_back(minh.top().second);
            minh.pop();
        }
        
        return v;
    }
};