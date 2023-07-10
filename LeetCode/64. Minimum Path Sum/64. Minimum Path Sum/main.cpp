//
//  main.cpp
//  64. Minimum Path Sum
//
//  Created by Tai-Sung Wang on 2022/5/8.
//

#include <iostream>
#include <vector>

int dp(int r, int c, std::vector<std::vector<int>> &grid, std::vector<std::vector<int>> &table){
    
    if(r == 0 and c == 0){
        return grid[r][c];
    }
    
    if(r < 0 || c < 0){
        return 2147483647;
    }
    
    if(table[r][c] != 2147483647){
        return table[r][c];
    }
    
    return table[r][c] = std::min(dp(r-1, c, grid, table), dp(r, c-1, grid, table)) + grid[r][c];
}

int main(int argc, const char * argv[]) {
    
    std::vector<std::vector<int>> grid = {{1,3,1},
                                           {1,5,1},
                                           {4,2,1}};
    
    std::vector<std::vector<int>> table(grid.size(), std::vector<int>(grid[0].size(), 2147483647));
    int ans = dp(grid.size()-1, grid[0].size()-1, grid, table);
    
    std::cout<<ans<<"\n";
    return 0;
}
