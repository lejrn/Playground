//
// Created by USER on 17/09/2022.
//

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> buildArray(std::vector<int>& nums) {
        std::vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};

int main(){
    std::vector<int> nums{0,2,1,5,3,4}, res;
    Solution ans;
    res=ans.buildArray(nums);
    for(auto r : res)
        std::cout << r << std::endl;
    return 0;
}