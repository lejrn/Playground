//
// Created by USER on 18/09/2022.
//

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <sstream>

class Solution {
public:
    int arithmeticTriplets(std::vector<int>& nums, int diff) { // O(n^3)
        int acc=0;
        for(int i=0; i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++)
                for(int k=j+1;k<nums.size();k++)
                    if(nums[j]-nums[i] == diff && nums[k]-nums[j] == diff)
                        acc++;
        return acc;
    }

    int arithmeticTriplets2(std::vector<int>& nums, int diff) { // O(n)
        std::unordered_map<int,bool> hash;
        int res=0;
        for(auto n : nums)
            hash[n]=true;
        for(int i=0; i<nums.size();i++)
            res += hash[nums[i]-diff] && hash[nums[i]+diff];
        return res;
    }
};

int main(){
    Solution ans;
    std::vector<int> nums{4,5,6,7,8,9};
    int diff=2;
    std::cout << ans.arithmeticTriplets2(nums,diff) << std::endl;
    return 0;
}