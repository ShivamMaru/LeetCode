#include<bits/stdc++.h>
class Solution {
public:
    bool rotateString(string s, string goal) {

       string temp = s + s;

       if(s.size() == goal.size() && temp.find(goal) != string::npos)
            return true;
        return false;
        
    }
};