class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int dup = x;
        long long rev = 0;
        while(x != 0){
            int y = x%10;
            rev = rev*10 + y;
            x = x/10;
        }
        
        if(rev == dup)
            return true;
        return false;
        
    }
};