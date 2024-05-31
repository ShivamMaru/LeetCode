class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st; 
        int n = asteroids.size();
        
        for(int i=0; i<n; i++){
            
            if(st.empty() || asteroids[i] > 0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty()){
                    int ele = st.top();
                    if(ele < 0){
                        st.push(asteroids[i]);
                        break;
                    }
                    int abval = abs(asteroids[i]);
                    if(abval == ele){
                        st.pop();
                        break;
                    }
                    else if(abval<ele)
                        break;
                    else{
                        st.pop();
                        if(st.empty()){
                            st.push(asteroids[i]);
                            break;
                        }
                    }
                   
                }
                
            }
                
        }
        int len = st.size();
        vector<int> v(len,0);
        for(int i= len-1; i>=0; i--){
            v[i] = st.top();
            st.pop();
        }
        return v;
    }
};