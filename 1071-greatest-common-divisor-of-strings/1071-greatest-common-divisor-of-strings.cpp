class Solution {
public:
    int gcd(int a , int b){
        while(b % a != 0){
           int  r = b%a;
            b = a;
            a = r;
        }
        return a;
    }
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 == str2 + str1){
        int a = str1.length();
        int b = str2.length();
        int gcdLen = gcd(a , b);
        return str1.substr(0 , gcdLen);
        }
        else{
            return "";
        }
    }

    
};