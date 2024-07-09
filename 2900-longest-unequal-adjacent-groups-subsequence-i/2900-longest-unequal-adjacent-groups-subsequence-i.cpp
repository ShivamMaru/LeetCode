class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        
        vector<string> v;
        int x = -1;
        for(int i=0; i<groups.size(); i++){
            if(x != groups[i]){
                v.push_back(words[i]);
                x = groups[i];
            }
        }
        return v;
    }
};