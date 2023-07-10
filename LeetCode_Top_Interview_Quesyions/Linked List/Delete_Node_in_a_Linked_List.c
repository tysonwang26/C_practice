#include <stdio.h>


 //Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

void deleteNode(struct ListNode* node) {
    struct ListNode *nodeTmp = node;
    while(nodeTmp->next!=NULL){
        nodeTmp->val = nodeTmp->next->val;
        if(nodeTmp->next->next!=NULL)
            nodeTmp = nodeTmp->next;
        else
            break;
    }
    nodeTmp->next = NULL;
}