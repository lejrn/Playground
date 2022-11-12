//
// Created by USER on 13/11/2022.
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
    std::vector<int> decode(std::vector<int>& encoded, int first) {
        std::vector<int>res;
        res.push_back(first);
        for(int i=0;i<encoded.size();++i)
            res.push_back(encoded[i] ^ res[i]);
        return res;
    }
};

int main(){
    Solution ans;
    std::vector<int> encoded{1,2,3}, res;
    int first = 1;
    res=ans.decode(encoded,first);
    for(auto r : res)
        std::cout << r << std::endl;
    return 0;
}