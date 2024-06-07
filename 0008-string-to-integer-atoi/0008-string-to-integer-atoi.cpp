class Solution {
public:
    int myAtoi(string s , int i, int sign , long long result){
        if(i >= s.size() ||  s[i]<'0' || s[i]>'9')
            return result*sign;
        int temp = s[i] - '0';
        result = result*10 + temp;
        if(result*sign > INT_MAX)
            return INT_MAX;
        if(result*sign < INT_MIN)
            return INT_MIN;
        return myAtoi(s , i+1 , sign , result);

    }


    int myAtoi(string s) {
        int n = s.size();
        long long ans = 0, sign = 1, i=0;
        while(i<n && s[i] == ' ')
            i++;
        if(s[i] == '-'){
            sign = -1;
            i++;}
        else if(s[i] =='+'){
            sign = 1;
            i++;}
        return myAtoi(s ,i , sign , 0);
    }
};