/*
 * stack.h
 *
 *  Created on: Jun 25, 2015
 *      Author: dchiu
 */

#ifndef STACK_H_
#define STACK_H_

/**
 * Struct for LL Node
 */
typedef struct LLNode
{
    double val;
    //struct LLNode *parent; I don't think this needs to be a doublely linked list afterall.
    struct LLNode *child;
} LLNode;

/** 
 * Struct for Linked List
 */
typedef struct LL
{
    LLNode *root;
}LL;

//function declarations
int size(LL *stack);
void insert(LL *stack, double value);
double pop();
void printStack(LL *stack);


#endif /* STACK_H_ */
