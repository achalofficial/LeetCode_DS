/*

** XOR Operation in a Array **

Given an integer n and an integer start.

Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.

Return the bitwise XOR of all elements of nums.

** Example 1: **

Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.

*/

class Solution {
public:
    int xorOperation(int n, int start) {
       vector<int> nums ;
       int Xor = 0 ;
       for (int i = 0 ; i < n ; ++i ){
           nums.push_back(start+ 2*i);
           Xor = Xor^nums[i];
       }
        
        return Xor;
    }
};