#include <stdlib.h>
#include <stdio.h>

struct LinkedListNode{
  int data;
  struct LinkedListNode* nextLink;
}typedef llNode_t;

llNode_t* CreateLinkedListHead(int data) {
    llNode_t* head = (llNode_t*)malloc(sizeof(llNode_t));
    if (head == NULL) {
        fprintf(stderr, "Allocation failed\n");
        return NULL;
    }
    head->data = data;
    head->nextLink = NULL;
    return head;
}


LinkedListTraversal(*llNode_t head,)

llNode_t* AppendLLNode(llNode_t* previousNode, int newNodeData){
  if(previousNode == NULL){
    fprintf(stderr,"Previous node does not exist");
    return NULL;
  }
  llNode_t* newNode = (llNode_t*)malloc(sizeof(llNode_t));
  if (newNode == NULL){
    fprintf(stderr,"Allocation failed");
    return NULL;
  }
  
  previousNode -> nextLink = newNode;
  newNode -> data = newNodeData;
  newNode -> nextLink = NULL;

  return newNode;
}<LeftMouse>


void printNode(llNode_t* node) {
    if (node == NULL) {
        printf("Node is NULL\n");
        return;
    }
    else if node
    printf("Address:%p\n", (void*)node);
    printf("+----------+\n");
    printf("| Data:%d  |\n", node->data);
    printf("| Next:%p  |\n", (void*)node->next);
    printf("+----------+\n");
}


