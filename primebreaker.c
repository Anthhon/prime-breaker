#include<stdio.h>

#define TRUE 1
#define FALSE 0

void main(void){

    long unsigned target_number = 189271; // put here the number to be found
    long unsigned counter = 0,
                  new_number = 0,
                  sec_number = 0;
    int is_prime;

    // generate numbers infinitely
    while(TRUE){

        // avoid testing for 0 and 1
        if ( new_number > 1 ){

            is_prime = TRUE; // restart value

            //  if number is divisible by any number beetween
            //  2 and n / 2, it is not prime
            for ( unsigned iter = 2 ; iter < ( new_number / 2 ) + 1 ; ++iter ){
                if ( new_number % iter == 0 ){
                    break; // go to next number
                } else {
                    // generate a second prime number for testing
                    for ( unsigned sec_iter = 2 ; sec_iter < ( sec_number / 2 ) + 1 ; ++sec_iter ) {
                        
                    }
                }
            }

            if ( is_prime == TRUE )
                printf("pg: %ld is a prime number\n", new_number);
        }

        ++new_number; // update value for next loop iteration
    }
}