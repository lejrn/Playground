//
// Created by USER on 17/09/2022.
//

#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        int ans = 0;
        std::unordered_map<int,int> hash;
        for(int i=0; i<nums.size();++i){
            int occurrence = hash[nums[i]];
            hash[nums[i]]++;
            ans += occurrence;
        }
        return ans;
    }
};

int main(){
    Solution ans;
    std::vector<int> nums{1,2,3,1,1,3};
    std::cout << ans.numIdenticalPairs(nums) << std::endl;
    return 0;
}