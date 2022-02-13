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
    struct LLNode *child;
} LLNode;

/** 
 * Struct for Linked List
 */
typedef struct LL
{
    LLNode *topOfStack;
    int stackSize;
}LL;

//function declarations
int size();
void insert(LL *stack, double value);
double pop();
void printStack(LL *stack);
#endif /* STACK_H_ */
