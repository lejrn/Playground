//
// Created by USER on 01/10/2022.
//

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <stack>


class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        int max=0;
        for(auto snt : sentences){
            int count=0;
            for(int i=0; i<snt.size();i++)
                if(snt[i]==' ') count++;
            if(count > max)
                max =count;
        }
    return max+1;
    }
};

int main(){
    Solution ans;
    std::vector<std::string> nums{"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    std::cout << ans.mostWordsFound(nums) << std::endl;
    return 0;
}