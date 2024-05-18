class Solution {
public:
    int isSubsequence(string s, string t,int i, int j){
        if(i == 0 || j == 0){
            return 0;
        }
        if(s[i-1] == t[j-1]){
            return 1 +isSubsequence(s,t,i-1,j-1);
        }
        else{
            return isSubsequence(s,t,i,j-1);
        }
    }




    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m > n)
            return false;
        
        if(isSubsequence(s,t,m,n) == m)
            return true;
        else  
            return false;
        
    }
};