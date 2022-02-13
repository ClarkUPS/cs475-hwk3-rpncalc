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
                        if(num2 != 0){   
                           aftOpp = (num2 / num1);
                        }else{
                            printf("\nERROR: sorry, cannot evaluate expression. Devide by zero error.\n");
                        }

                    }else{
                        printf("\nERROR: sorry incorrect syntax, punctation not recognized. Please only use the following operations: (+, -, *, /)\n");
                    }


                      printf("\nAfter opp: %f", aftOpp);  

                }




        printf("\nTokin: %c", *tokin);
        printf("\n");
        tokin = strtok(NULL, " "); //next input value!
    }
}

// void evaluate(char str[]){
//     //create stack base!
//     LL *stack =(LL *)malloc(sizeof(LL));
    
//     //first split call
//     char *tokin = strtok(str," ");
//         while(tokin != NULL){
            
//         int opis = ispunct(*tokin);
//         printf("%d", opis);
//             if(opis != 0){
//                  printf("\nis punct\n");
                    
                    
//                     int stacksize = size(stack);//remve
//                     printf("%dSTACK", stacksize);//remove


//                 if(size(stack) >= 2){
//                     printf("good to add");
                    
//                 }else{
//                     printf("\nsorry syntax error.\n");
//                     break;
//                 }



//             }else{
//                 //add the double to the stack!
//                 printf("\nis a number!");
//                 double val = atof(tokin);
//                 insert(stack, val);
//             }
            
//         //Next Tokin
//         printf("\nTokin: %c", *tokin);
//         printf("\n");
//         tokin = strtok(NULL, " "); //next input value!
//     }
//     //final after output
//     printStack(stack);
//     double final = pop(stack);
//     printf("Final Output = %f",final);
    
// }


///////////////////////////////////////////////////////////////////
// while(tokin != NULL){
        

//         int isOpp = ispunct(*tokin);
//          if(isOpp != 0){
//              printf("is punc!");
            
//             //CHECK: Make sure the opperators are valid 
//             if(*tokin == '+' || *tokin == '-' || *tokin == '*' || *tokin == '/' ){
//                 //CHECK: Make sure the opperaion can work
//                 if(size(stack) >= 2){
                    
//                     //opperations
//                     double n1 = pop(stack);
//                     double n2 = pop(stack);
//                     double sol;

//                     if(*tokin == '+'){
//                         sol = n2 - n1; 
//                     }else if(*tokin == '-'){
//                         sol = n2 - n1;
//                     }else if(*tokin == '*'){
//                         sol = n2 * n1;
//                     }else{
//                         //CHECK devide by zero error
//                         if(n1 != 0){
//                             sol = n2 /n1;
//                         }else{
//                             printf("\nsorry devide by zero error. Please try again\n");
//                             break;
//                         }
//                     }
//                      insert(stack,sol); //Push sol back onto the stack
                     
//                 }else{
//                     printf("\nSorry, incorrect syntax. Please try again\n");
//                     break;
//                 }
//             }else{
                
//                 printf("\nSorry, not a valid opperation. Please try again\n");
//                 break;
//             }
//         }else{ //it needs to be a double and thus poped onto the stack 
//             double val = atof(tokin);
//             insert(stack, val);
//             //printf("%f", val);
            
    
        
//         }
//         printf("%s\n", tokin);