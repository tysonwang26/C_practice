
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int value;
    struct Node *next_node;
};


struct Node *pushNodeToLast(struct Node *original_head, struct Node *new_node){
    printf("push node to last\n");
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

struct Node *pushNodeToFirst(struct Node *original_head, struct Node *new_node){
    printf("push node\n");
    new_node->next_node = original_head;
    return new_node;
}

struct Node *popFirstNode(struct Node *head){
    printf("pop node\n");
    head = head->next_node;
    return head;
}

struct Node *popLastNode(struct Node *head){
    struct Node *tmp = head;
    while(head->next_node != NULL){
        printf("%p\t%d\n", head, head->value);
        if(head->next_node->next_node == NULL){
            tmp = head->next_node;
            head->next_node = NULL;
            break;
        }
        head = head->next_node;
    }
    return tmp;
}

void printQueue(struct Node *head){
    printf("print queue\n");
    while(head != NULL){
        printf("value: %d\n", head->value);
        head = head->next_node;
    }
}

int main(){

    struct Node *queue_head;

    struct Node head = {
        .value = 1,
        .next_node = NULL
    };

    struct Node new_node1 = {
        .value = 2,
        .next_node = NULL
    };

    queue_head = &head;

    queue_head = pushNodeToFirst(queue_head, &new_node1);
    printQueue(queue_head);

    // queue_head = popFirstNode(queue_head);
    // printQueue(queue_head);

    struct Node *last_node = popLastNode(queue_head);
    printf("%d\n", last_node->value);
    printQueue(queue_head);

    return 0;
}
