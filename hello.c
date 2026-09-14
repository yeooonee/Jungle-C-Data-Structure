
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node *create_node(int value){
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

int main(void){
    Node *head = create_node(1);
    head -> next = create_node(2);
    head->next->next = create_node(3);

    for (Node *cur = head; cur != NULL; cur = cur->next){
        printf("%d -> ", cur->value);
    }
    printf("NULL\n");

    // 메모리 해제
    Node *cur = head;
    while (cur != NULL) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
    return 0;
}