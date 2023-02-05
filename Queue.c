
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int value;
    struct Node *next_node;
};


struct Node *pushNode(struct Node *original_head, struct Node *new_node){
    printf("push node\n");
    struct Node *head = original_head;
    struct Node *node = original_head;
    while(node != NULL){
        if(node->next_node == NULL){
            node->next_node = new_node;
            break;
        }
        node = node->next_node;
    }

    return head;
}

struct Node *popNode(struct Node *head){
    printf("pop node\n");
    head = head->next_node;
    return head;
}

void printQueue(struct Node *head){
    printf("print queue\n");
    while(head != NULL){
        printf("value: %d\n", head->value);
        head = head->next_node;
    }
}

int main(){

    struct Node queue_head = {
        .value = 1,
        .next_node = NULL
    };

    struct Node new_node = {
        .value = 2,
        .next_node = NULL
    };

    queue_head = *pushNode(&queue_head, &new_node);

    printQueue(&queue_head);

    queue_head = *popNode(&queue_head);
    printQueue(&queue_head);
    return 0;
}
