//
// Created by USER on 12/11/2022.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> decompressRLElist(std::vector<int>& nums) {
        std::vector<int> result;
        for(int i=0;i<nums.size();i+=2)
            result.insert(result.end(),nums[i],nums[i+1]);
        return result;
    }

    std::vector<int> decompressRLElist2(std::vector<int>& nums) {
        std::vector<int> result;
        int size=nums.size();
        for(int i=0;i<size;i+=2){
            int repeat=nums[i];
            while(repeat--){
                result.push_back(nums[i+1]);
            }
        }
        return result;
    }
};

int main(){
    Solution ans;
    std::vector<int> nums{1,1,2,3}, res;
    res=ans.decompressRLElist2(nums);
    for(auto r : res)
        std::cout << r << std::endl;
    return 0;
}