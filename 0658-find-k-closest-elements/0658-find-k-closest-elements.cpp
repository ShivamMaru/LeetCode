class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>> mh;
        vector<int> v;
        
        for(int i=0; i< arr.size(); i++){
            mh.push({abs(arr[i] - x) , arr[i]});
            
            if(mh.size() > k)
                mh.pop();
        }
        while(mh.size() > 0){
            v.push_back(mh.top().second);
            mh.pop();
        }
        sort(v.begin(), v.end());
        
        return v;
        
    }
};