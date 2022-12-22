//
// Created by Anthony on 2022/12/22.
//

#include "Node.h"
#include "iostream"


//打印每个节点
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}