class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int> mpp;
        vector<int> v;
        for(int i=0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }
        for(auto it : mpp){
            v.push_back(it.second);
        }

        sort(v.begin(),v.end());
        for (int i = 0; i < v.size() - 1; i++){
            if (v[i] == v [i+1])
                return false;
        }
        return true;
    }
};