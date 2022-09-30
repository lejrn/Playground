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
    int finalValueAfterOperations(std::vector<std::string>& operations) {
        int X=0;
        for(int i=0;i<operations.size();++i){
            if(operations[i][1]=='+') X++;
            else
                X--;
        }
        return X;
    }
};

int main(){
    Solution ans;
    std::vector<std::string> nums{"X++","++X","--X","X--"};
    std::cout << ans.finalValueAfterOperations(nums) << std::endl;
    return 0;
}