//
// Created by USER on 30/09/2022.
//

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
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int> result;
        int k=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=val)
                result.push_back(nums[i]);
            else
                k++;
        for(int i=0;i<nums.size()-k;i++)
            nums[i]=result[i];
        return nums.size()-k;
    }

    int removeElement2(std::vector<int>& nums, int val) {
        int last_idx=nums.size()-1;
        int k=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==val) {
                k++;
                for(int j=last_idx;j>i;j--)
                    if(nums[j]!=val) {
                        last_idx = j;
                        break;
                    }
                nums[i]=nums[last_idx];
                if(last_idx>0) last_idx-=1;
            }
        return nums.size()-k;
    }
    int removeElement3(std::vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); ++i)
            if(nums[i] != val)
                nums[k++] = nums[i];
        return k;
    }
};

int main(){
    Solution ans;
    std::vector<int> nums{3,1,3,3,3};
    int val=3;
    std::cout << ans.removeElement3(nums,val) << std::endl;
    std::cout << std::endl;
    for(int i=0; i<nums.size(); i++)
        std::cout << nums[i] << std::endl;
    return 0;
}