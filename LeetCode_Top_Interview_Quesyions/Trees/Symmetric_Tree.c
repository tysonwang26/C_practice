
/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/627/
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
bool DFS(struct TreeNode *leftNode, struct TreeNode *rightNode){
    if((leftNode == NULL) || (rightNode == NULL)){
        if(leftNode == rightNode) return true;
        else return false;
    }
    
    
    if(leftNode->val == rightNode->val){
        return DFS(leftNode->left, rightNode->right) && DFS(leftNode->right, rightNode->left);
    }else{
        return false;
    }
}

bool isSymmetric(struct TreeNode* root){
    bool ans = DFS(root->left, root->right);
    return ans;
}