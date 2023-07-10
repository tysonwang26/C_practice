/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* cur = head;
    struct ListNode* pre = NULL;
    struct ListNode* tmp = NULL;
    
    while(cur!=NULL){
        tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    
    return pre;    
}