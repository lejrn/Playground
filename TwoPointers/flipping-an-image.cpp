//
// Created by USER on 23/09/2022.
//
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>


class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
        for (int i = 0; i < image.size(); ++i) {
            for (int j = 0; j < (image.size()+1) / 2; ++j) {
                int temp = !image[i][j];
                image[i][j] = !image[i][image.size() - 1 - j];
                image[i][image.size() - 1 - j] = temp;
            }
        }
        return image;
    }

    std::vector<std::vector<int>> flipAndInvertImage2(std::vector<std::vector<int>>& image) {
        for(int i=0;i<image.size();++i){
            reverse(image[i].begin(),image[i].end());
            std::vector<int> ones(image.size(),1);
            std::transform(image[i].begin(), image[i].end(), ones.begin(),ones.begin(), std::bit_xor<int>());
        }
        return image;
    }

};

int main(){
    std::vector<std::vector<int>> im{{1,1,0,0}, {1,0,0,1}, {0,1,1,1},{1,0,1,0}},res;
    Solution ans;
    res=ans.flipAndInvertImage2(im);
    return 0;
}
