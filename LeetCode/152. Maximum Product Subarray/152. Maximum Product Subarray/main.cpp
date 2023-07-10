//
//  main.cpp
//  152. Maximum Product Subarray
//
//  Created by Tai-Sung Wang on 2022/5/12.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    std::vector<int> nums = {2, 3, -2, 4};
    
    int cur_min = nums[0];
    int cur_max = nums[0];
    int glo_max = nums[0];
    
    for (int i=1; i<nums.size(); i++) {
        int tmp = cur_max;
        
        
        cur_max = std::max(cur_max*nums[i], cur_min*nums[i]);
//        cur_max = std::max(cur_max, nums[i]);
        cur_min = std::min(tmp*nums[i], cur_min*nums[i]);
//        cur_min = std::min(cur_min, nums[i]);
        
        glo_max = std::max(glo_max, cur_max);
    }
    
    printf("%d", glo_max);
    
    return 0;
}
