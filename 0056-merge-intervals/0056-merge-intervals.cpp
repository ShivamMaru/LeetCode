class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> result;
       
        
        for(int i=0; i<n; i++){
            if(result.empty()  || intervals[i][0] > result.back()[1]){
                result.push_back(intervals[i]);
            }
            else{
                result.back()[1] = max(result.back()[1] , intervals[i][1]);
            }
            
        }
            
        return result;
    }
};