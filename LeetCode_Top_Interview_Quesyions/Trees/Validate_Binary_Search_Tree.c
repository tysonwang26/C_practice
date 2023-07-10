
/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/625/
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
bool isValid(struct TreeNode *node, long long int min, long long int max){
    if(node == NULL) return true;
    
    if((node->val <= min) || (node->val >= max)) return false;
    
    return isValid(node->left, min, node->val) && isValid(node->right, node->val, max);
}

bool isValidBST(struct TreeNode* root){
    return isValid(root, -100000000000, 100000000000);

}