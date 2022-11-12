//
// Created by USER on 12/11/2022.
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
    std::vector<int> createTargetArray(std::vector<int>& nums, std::vector<int>& index) {
        std::vector<int>res;
        for(int i=0;i<nums.size();++i)
            res.insert(res.begin()+index[i],nums[i]);
        return res;
    }
};

int main(){
    Solution ans;
    std::vector<int> nums{0,1,2,3,4}, index{0,1,2,2,1}, res;
    res=ans.createTargetArray(nums, index);
    for(auto r : res)
        std::cout << r << std::endl;
    return 0;
}