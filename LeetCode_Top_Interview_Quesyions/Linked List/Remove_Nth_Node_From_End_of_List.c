
#include <stdio.h>


struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    
    struct ListNode *node = head;
    int nNode = 0;
    while(node != NULL){
        nNode++;
        node = node->next;
    }
    
    printf("%d\n", nNode);
    if(nNode == 1){
        return NULL;
    }
    
    if(n==nNode){
        return head->next;
    }
    
    node = head;
    int index = 0;
    while(index<nNode){
        if(index==nNode-n-1){
            node->next = node->next->next;
            // printf("%d", index);
            break;
            
        }
        node = node->next;
        index++;
    }
    
    return head;
}