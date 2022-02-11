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

	

	do{
		printf("Enter an equation (in RPN):\n"); //intro statment

		fgets(eqn, MAX_EQ_LEN,stdin); // prompt for input
		
		//evaluate(eqn);
		
		printf("Evaluate another? (y/n): y\n"); //prompt for repeat
		fgets(resp,MAX_EQ_LEN,stdin); 
		printf("The input is: %c",resp[0]);

		if(resp[0] != 'y' || resp[0] != 'n'){
			printf("Sorry, could not parse \nEvaluate another? (y/n): y\n");
			fgets(resp,MAX_EQ_LEN,stdin);
			printf("The input is: %c",resp[0]);
			printf("\n");
		}else{
			printf("what the fuck!");
		}
		printf("\nThe input is: %c",resp[0]);

	}while(resp[0] != 'n');

	printf("I want to break free!");
	



	// /* TODO */

	// //main stack to which everything is done
	// LL *stack =(LL *)malloc(sizeof(LL));
	
	// //insert(stack, 200.0);
	// //insert(stack, 5000.0);
	// //insert(stack, 0.009);

	// printStack(stack);

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




	// printf("Exiting...\n");
	return 0;
}
