/*
 ============================================================================
 Name        : PolishSol.c
 Author      : Clark
 Version     : beta 1.653
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#include "polish.h"

#define MAX_EQ_LEN 100 /* maximum RPN expression input length */

int main()
{
	char eqn[MAX_EQ_LEN];	 // string to store the input RPN expression
	char resp[MAX_EQ_LEN]; // string to store the user's response "y" or "n"

	

	while(resp[0] != 'n'){
		//resp[0] = '\0'; //RESET?
		printf("Enter an equation (in RPN):\n"); //intro statment
		fgets(eqn, MAX_EQ_LEN,stdin); // prompt for input
		
		evaluate(eqn); //call to evaluate
		//eqn[0] = '\n'; //RESET?
		
		
		printf("Evaluate another? (y/n): y\n"); //prompt for repeat
		fgets(resp,MAX_EQ_LEN,stdin); 

		if(resp[0] != 'y' && resp[0] != 'n'){
			while(resp[0] != 'y' && resp[0] != 'n'){
				printf("Sorry, could not parse \nEvaluate another? (y/n): y\n");
				fgets(resp,MAX_EQ_LEN,stdin);
				printf("\n");
			}
		}
	}

	// /* TODO */

	// //main stack to which everything is done
	//LL *stack =(LL *)malloc(sizeof(LL));
	
	// insert(stack, 200.0);
	// insert(stack, 5000.0);
	// insert(stack, 0.009);

	// printStack(stack);
	// printf("stack size: %d", size());

	// double tempVal = pop(stack);

	// printf("\npoped: %f", tempVal);

	// printStack(stack);
	// printf("stack size: %d", size());

	// tempVal = pop(stack);

	// printf("\npoped: %f", tempVal);

	// printStack(stack);
	// printf("stack size: %d", size());
	
	// tempVal = pop(stack);

	// printf("\npoped: %f", tempVal);

	// printStack(stack);
	// printf("stack size: %d", size());

	// tempVal = pop(stack);

	// printf("\npoped: %f", tempVal);

	// printStack(stack);

	// printf("stack size: %d", size());

	//END OF SECOND TEST

	//printStack(stack);

	//double temp = pop(*stack);

	// printf("Elements in stack: %d", size(stack));
	// printf("\n"); //add after--^
	
	// printf("Poped: %f", pop(stack));
	// printf("\n");

	// printStack(stack);

	// printf("Poped: %f", pop(stack));
	// printf("\n");

	// printStack(stack);

	// printf("Elements in stack new!: %d", size(stack));
	// printf("\n"); //add after--^

	printf("\nExiting...\n");
	return 0;
}
