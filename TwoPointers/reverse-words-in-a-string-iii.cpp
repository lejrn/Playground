//
// Created by USER on 23/09/2022.
//


#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>

class Solution {
public:
    std::string reverseWords(std::string str) {
        std::string temp,res;
        for(int i=0;i<str.length();i++){
            if(str[i]!=' ')
                temp.insert(0,1,str[i]);
            else{
                res+=temp;
                res+=' ';
                temp="";
            }
        }
        res+=temp;
        return res;
    }

    std::string reverseWords2(std::string str) {
        std::string res;
        for(int i=0, j=0;i<str.length();i++){
            if(str[i]!=' ')
                res.insert(j,1,str[i]);
            else{
                res+=' ';
                j=i+1;
            }
        }
        return res;
    }
};

int main(){
    std::string s = "Let's take LeetCode contest";
    Solution ans;
    std::cout << ans.reverseWords2(s) << std::endl;
    return 0;
}