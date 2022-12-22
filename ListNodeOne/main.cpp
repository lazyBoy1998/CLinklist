#include <iostream>
#include "Node.h"

void printList(Node *node);

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // 创建三个节点
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1; // 指定 data=1放进头节点
    head->next = second; // 连接第二个节点

    second->data = 2; // 指定 data=2放进第二个节点
    second->next = third;

    third->data = 3; // 指定 data=3放进第三个节点
    third->next = NULL;

    // 调用打印
    printList(head);

    return 0;
}

