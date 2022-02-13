#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int stackSize = 0;

void insert(LL *stack, double value)
{
    LLNode *newNode = (LLNode *)malloc(sizeof(LLNode));

    //create the new node given input information
    newNode->val = value;
    newNode->child = NULL;

    if(stack->topOfStack == NULL){
        stack->topOfStack = newNode; //set root for refrence to rest of list
        //newNode->child = NULL;
    }
    else{
        LLNode *currentStackTop = stack->topOfStack; //Top of stack upon pass in
        newNode->child = currentStackTop; //link the old top of stack as child of new node
        stack->topOfStack = newNode; //make the new node the new top of the stack
    }
    stackSize++;
}

int size(){
    return stackSize;
}

//Prints the contence of the stack
void printStack(LL *stack){
    LLNode *tempNode = stack->topOfStack;
        printf("\nStack Contents:\n***************\n");
    while (tempNode != NULL){
        printf("%f\n",tempNode->val);
        tempNode = tempNode->child; 
    }
    printf("***************\n");
}


double pop(LL*stack){
    if(stack->topOfStack == NULL){
        printf("\nERROR: Sorry the stack is empty and cannot be poped!\n");
        return NAN;
    }
    LLNode *tempNode = stack->topOfStack; //get the top of the stack
    double val = tempNode->val; //save the value there

    stack->topOfStack = tempNode->child;
    free(tempNode);

    stackSize--;
    return val;
}

// double pop(LL* stack){
//     if(stack->root == NULL){
//         printf("here");
//         return NAN;
//     }



//     LLNode *tempNode = stack->root; //store the retured element
//     LLNode *prevousNode;
//     if(stack->root != NULL){ // MAKE AN ACUTAL GUARD!
//         while(tempNode->child != NULL){
//             prevousNode = tempNode; //need to keep track of the second to last node in order to update it's child to null
//             tempNode = tempNode->child;
//         }
//         double val = tempNode->val;
//         prevousNode->child = NULL;
//         free(tempNode);
//     return val;
//     }
//     return NAN;
// }











////////////////////////////////////////////
// void insert(LL *stack, double value)
// {
//     LLNode *newNode = (LLNode *)malloc(sizeof(LLNode));

//     newNode->val = value;
//     newNode->child = NULL;

//     if(stack->root == NULL){
//         stack->root = newNode; //set root for refrence to rest of list
//     }
//     else{
//         LLNode *tempNode = stack->root;
//         while(tempNode->child != NULL){
//             tempNode = tempNode->child;
//         }
//         tempNode->child = newNode; //asigns the new node to the first avalable free child node in the stack.
//     }

// }

// int size(LL *stack){
//     int stackSize = 0;
//     LLNode *tempNode = stack->root;
//      while (tempNode != NULL){
//          stackSize++;
//          tempNode = tempNode->child;
//     }
//     return stackSize;
// }



// void printStack(LL *stack){
//     LLNode *tempNode = stack->root;
//         printf("Stack Contents:\n***************\n");
//     while (tempNode != NULL){
//         printf("%f\n",tempNode->val);
//         tempNode = tempNode->child; 
//     }
//     printf("***************\n");
// }

// double pop(LL* stack){
//     if(stack->root == NULL){
//         printf("here");
//         return NAN;
//     }



//     LLNode *tempNode = stack->root; //store the retured element
//     LLNode *prevousNode;
//     if(stack->root != NULL){ // MAKE AN ACUTAL GUARD!
//         while(tempNode->child != NULL){
//             prevousNode = tempNode; //need to keep track of the second to last node in order to update it's child to null
//             tempNode = tempNode->child;
//         }
//         double val = tempNode->val;
//         prevousNode->child = NULL;
//         free(tempNode);
//     return val;
//     }
//     return NAN;
// }