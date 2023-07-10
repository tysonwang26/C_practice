
/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/555/
*/
#include <stdio.h>
#include <stdlib.h>



struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
int dfs(struct TreeNode *node){
    if(node==NULL) return 0;
    
    int left = dfs(node->left);
    int right = dfs(node->right);
    return left>right?(left+1):(right+1);
}


int maxDepth(struct TreeNode* root){
    int ans = dfs(root);
    return ans;

}