/*

** Split a String in Balanced Strings ** 

Balanced strings are those who have equal quantity of 'L' and 'R' characters.

Given a balanced string s split it in the maximum amount of balanced strings.

Return the maximum amount of splitted balanced strings.

** Example 1: **

Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.

*/ 

class Solution {
public:
    int balancedStringSplit(string s) {
        int status = 0,count = 0 ;
        for ( int i = 0 ;i < s.size() ; ++i){
            if ( s.at(i) == 'L') status++ ; 
            else if (s.at(i) == 'R') status--;
            if (status == 0) count++;
        }
        return count ;
    }
};