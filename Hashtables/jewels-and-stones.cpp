//
// Created by USER on 17/09/2022.
//

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <string>

class Solution {
public:
    int numJewelsInStones1(std::string jewels, std::string stones) {
        std::unordered_map<char,int> hash;
        int ans=0;
        for(auto j : jewels) hash[j]++;
        for(auto s : stones) ans+=hash[s];
        return ans;
    }

    int numJewelsInStones2(std::string jewels, std::string stones) {
        std::unordered_set<char> set(jewels.begin(), jewels.end());
        int ans=0;
        for(auto s : stones) ans+=set.contains(s);
        return ans;
    }
};


int main(){
    std::string j="aA",s="aAAbbbb";
    Solution ans;
    std::cout << ans.numJewelsInStones1(j,s) << std::endl;
    return 0;
}