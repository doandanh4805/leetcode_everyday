#include<stdio.h>
#include<string>
#include<stdlib.h>

struct ListNode{
   int val;
   struct ListNode*Next;
};

struct ListNode * creativeNew(int value){
    struct ListNode *node = (struct ListNode*)malloc(sizeof(struct ListNode));
    if(node == NULL){
        printf("Memorry no value");
        return NULL;
    }
    node -> val =  value;
    node -> Next = NULL;
    return node;
};

struct ListNode(){

};
