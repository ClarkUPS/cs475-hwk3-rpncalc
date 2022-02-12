#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"
#include "polish.h"

void evaluate(char str[]){
    //create stack base!
    LL *stack =(LL *)malloc(sizeof(LL));
    
    //first split call
    char *tokin = strtok(str," ");
    while(tokin != NULL){


        int isOpp = ispunct(*tokin);
         if(isOpp != 0){
             printf("is punc!");
            
            //CHECK: Make sure the opperators are valid 
            if(*tokin == '+' || *tokin == '-' || *tokin == '*' || *tokin == '/' ){
                //CHECK: Make sure the opperaion can work
                if(size(stack) >= 2){
                    
                    //opperations
                    double n1 = pop(stack);
                    double n2 = pop(stack);
                    double sol;

                    if(*tokin == '+'){
                        sol = n2 - n1;
                    }else if(*tokin == '-'){
                        sol = n2 - n1;
                    }else if(*tokin == '*'){
                        sol = n2 * n1;
                    }else{
                        //CHECK devide by zero error
                        if(n1 != 0){
                            sol = n2 /n1;
                        }else{
                            printf("\nsorry devide by zero error. Please try again\n");
                            break;
                        }
                    }
                     insert(stack,sol);

                }else{
                    printf("\nSorry, incorrect syntax. Please try again\n");
                    break;
                }
                    
                    //Push sol back onto the stack
                   
               
            }else{
                
                printf("\nSorry, not a valid opperation. Please try again\n");
                break;
            }

        }else{ //it needs to be a double and thus poped onto the stack 
            double val = atof(tokin);
            insert(stack, val);
            printf("%f", val);
            
    
        
        }


        printf("%s\n", tokin);
        tokin = strtok(NULL, " "); //next input value!
        
    }
    
    printStack(stack);
    double final = pop(stack);
    printf("Final Output = %f",final);
    
}