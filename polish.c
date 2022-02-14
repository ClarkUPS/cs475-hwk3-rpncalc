#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"
#include "polish.h"

void evaluate(char str[]){
    LL *stack =(LL *)malloc(sizeof(LL));

    char *tokin = strtok(str," ");
        while(tokin != NULL){

           //filter out puntuation
           // printf("\nBefore: %f", *tokin);
            int opis = ispunct(*tokin);
            //printf("\nAfter: %f", *tokin);
                if(opis == 0){

                    //Convert tokin to double!
                    insert(stack, atof(tokin)); //add to stack if not punc
                    printStack(stack);
                }else{
                    //check to make sure the opp can be processed
                    if(size() < 2){
                        printf("\nERROR: sorry incorrect syntax, too few items on the stack\n");
                        break;
                    }

                    //Values to be evaluated:
                    double num1 = pop(stack);
                    double num2 = pop(stack); 
                    double aftOpp; //after the opperation has been applied

                    printf("\nNum 1: %f", num1); //REMOVE
                    printf("\nNum 2: %f", num2); //REMOVE
                    
                    //check if correct punc (+, -, *, /)
                    if(*tokin == '+'){
                        aftOpp = (num2 + num1);
                    }else if(*tokin == '-'){
                        aftOpp = (num2 - num1);
                    }else if(*tokin == '*'){
                        aftOpp = (num2 * num1);
                    }else if(*tokin == '/'){
                       //check for / 0 error!
                        if(num1 != 0){   
                           aftOpp = (num2 / num1);
                        }else{
                            printf("\nERROR: sorry, cannot evaluate expression. Devide by zero error.\n");
                        }

                    }else{
                        printf("\nERROR: sorry incorrect syntax, punctation not recognized. Please only use the following operations: (+, -, *, /)\n");
                    }


                      printf("\nAfter opp: %f", aftOpp);  
                    
                    insert(stack,aftOpp); //add the value back to the stack
                }

        printf("\nTokin: %c", *tokin);
        printf("\n");
        tokin = strtok(NULL, " "); //next input value!
    }

    //Check to make sure the equation was evaluated correctly
    if(size() > 1){
        printf("ERROR: sorry not enough operators, could not evaluate");
    }else{
    double finalAnswer = pop(stack);
    printf("\nfinal size = %d", size());
    printf("The final output is: %f", finalAnswer);
    }
    printStack(stack);
    free(stack); //Free the stack at the end?
}

//SELFNOTE: ERROR Occurs on second call



