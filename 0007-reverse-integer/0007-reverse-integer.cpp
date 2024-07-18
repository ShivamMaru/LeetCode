class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while(x != 0){
            int y = x % 10;
            rev = rev*10 + y;
            x = x/10;
            
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0;
            }
        }
        return static_cast<int>(rev); // Cast to int for return
    }
};