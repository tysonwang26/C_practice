//
//  main.cpp
//  73. Set Matrix Zeroes
//
//  Created by Tai-Sung Wang on 2022/5/2.
//

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        std::vector<int> row = {};
        std::vector<int> col = {};

        for (int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[0].size(); j++) {
                if(matrix[i][j] == 0){
                    if(notContain(row, i)){
                        row.push_back(i);
                    }

                    if(notContain(col, j)){
                        col.push_back(j);
                    }
                }
            }
        }

        for (int i=0; i<row.size(); i++) {
            for (int j=0; j<matrix.size(); j++) {
                if(j == row[i]){
                    for (int k=0; k<matrix[j].size(); k++) {
                        matrix[j][k] = 0;
                    }
                }
            }
        }


        for (int i=0; i<col.size(); i++) {
            for (int j=0; j<matrix.size(); j++) {
                for (int k=0; k<matrix[j].size(); k++) {
                    if(k == col[i]){
                        matrix[j][k] = 0;
                    }
                }
            }
        }
    }
    
    bool notContain(std::vector<int> row, int index){
        for (int i=0; i<row.size(); i++) {
            if(row[i] == index){
                return false;
            }
        }
        return true;
    }
};
