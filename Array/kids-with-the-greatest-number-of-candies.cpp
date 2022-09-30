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
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> res;
        int max=0;
        for(auto c : candies)
            if(c > max)
                max = c;

        for(int i=0;i<candies.size();i++)
            res.push_back(candies[i]+extraCandies >= max);

        return res;
    }

};

int main(){
    Solution ans;
    std::vector<int> nums{2,3,5,1,3};
    std::vector<bool> res=ans.kidsWithCandies(nums,3);
    for(auto an : res)
        std::cout << an << " ";
    return 0;
}