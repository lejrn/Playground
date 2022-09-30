//
// Created by USER on 30/09/2022.
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
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        for(int i=1; i<n;i++) {
            if(i%2==0){
                swap(nums[i],nums[i+n-2]);
                swap(nums[i+1],nums[i+n-1]);
                i++;
            }
            else
                swap(nums[i], nums[i +n-1]);
        }
        //swap(nums[n-1],nums[n]);
        return nums;
    }

    std::vector<int> shuffle2(std::vector<int>& nums, int n) {
        std::vector<int> res;
        for(int i=0,j=n; i<n;i++,j++) {
            res.push_back(nums[i]);
            res.push_back(nums[j]);
        }
        return res;
    }

    void swap(int &a, int &b){
        int temp=b;
        b=a;
        a=temp;
    }
};

int main(){
    Solution ans;
    std::vector<int> nums{1,2,3,4,4,3,2,1};
    std::vector<int> res=ans.shuffle2(nums,4);
    std::cout << std::endl;
    for(int i=0; i<res.size(); i++)
        std::cout << res[i] << " ";
    return 0;
}