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
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        std::map<int,int> hash; // Map structure uses self balancing BST like Redblack Tree, so every operation takes log(n)
        for(auto n : nums) hash[n]++;
        int acc=0,temp=0;
        for(auto &[key,val] : hash){
            temp=val;
            val=acc;
            acc+=temp;
        }
        for(auto &n : nums)
            n=hash[n];
        return nums;
    };

    std::vector<int> smallerNumbersThanCurrent1(std::vector<int>& nums) {
        int count[101] = {0}; // 0 <= nums[i] <= 100 // Access to the array is O(1)
        for(int i=0; i< nums.size();++i) count[nums[i]]++;
        for(int i = 1; i < 101; ++i) count[i] += count[i - 1];
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]==0)
                nums[i]=0; // Just to avoid index overflow
            else
                nums[i] = count[nums[i] - 1];
        }
        return nums;
    };
};

int main(){
    std::vector<int> nums{8,1,2,2,3}, res;
    Solution ans;
    res=ans.smallerNumbersThanCurrent1(nums);
    for(auto r : res)
        std::cout << r << std::endl;
    return 0;
}