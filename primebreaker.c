#include<stdio.h>

#define TRUE 1
#define FALSE 0

long unsigned number_is_prime(long unsigned number){

    int is_prime = TRUE; // start variable

    if ( number > 1 ){
        // verify if parameter number is prime
        for ( unsigned iter = 2 ; iter < ( number / 2 ) + 1 ; ++iter ){
                    if ( number % iter == 0 )
                        is_prime = FALSE; // define as not prime
                        break; // go to next number
                }
    } else is_prime = FALSE; // return false for 0 and 1

    if ( is_prime == TRUE ) return TRUE;
    else return FALSE;
}

void main(void){

    long unsigned target_number = 6577289; // put here the number to be found
    long unsigned new_number = 0,
                  sec_number = 0;

    // generate numbers infinitely
    while(TRUE){

        if ( number_is_prime( new_number ) == TRUE )
            printf("pg: %ld is a prime number\n", new_number);

        ++new_number; // update value for next loop iteration
    }
}