class Solution {
public:
    
    bool yes(char c){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) return true;
        return false;
        
    }
    string reverseVowels(string s) {
        
        int left = 0;
        int right = s.length()-1;
        
       while(left <= right){
           if(yes(s[left]) && yes(s[right])) {
               swap(s[left] , s[right]);
               left++;
               right--;
            }
           else if(!yes(s[left]) && yes(s[right])) left++;
           else if(yes(s[left]) && !yes(s[right])) right--;
           else {
               right--;
               left++;
           }
       }
        return s;
    }
};