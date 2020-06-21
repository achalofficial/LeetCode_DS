/*

** Defanging an IP Address **

Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

** Example 1: **

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

*/

class Solution {
public:
    string defangIPaddr(string address) {
        string newAdd ;
        for ( int i = 0 ; i < address.size() ; ++i){
            if ( address.at(i) == '.'){
                newAdd.push_back('[');
                newAdd.push_back('.');
                newAdd.push_back(']');
                continue ;
            }
            newAdd.push_back(address.at(i));
        }
        return newAdd;
    }
};