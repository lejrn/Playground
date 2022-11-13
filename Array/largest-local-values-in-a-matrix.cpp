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
    std::vector<std::vector<int>> largestLocal(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        std::vector<std::vector<int>> res(n-2);
        for (int i = 1; i < n - 1; i++)
            for (int j = 1; j < n - 1; j++) {
                int a = std::max(std::max(grid[i - 1][j - 1], grid[i - 1][j]), grid[i - 1][j + 1]);
                int b = std::max(std::max(grid[i][j - 1], grid[i][j]), grid[i][j + 1]);
                int c = std::max(std::max(grid[i + 1][j - 1], grid[i + 1][j]), grid[i + 1][j + 1]);
                res[i - 1].push_back(std::max(std::max(a, b), c));
            }
        return res;
    }
};

int main(){
    Solution ans;
    std::vector<std::vector<int>> mat{{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}}, res;
    res = ans.largestLocal(mat);
    for(int i=0;i<2;++i)
        for(int j=0;j<2;++j)
            std::cout << res[i][j] << std::endl;
    return 0;
}