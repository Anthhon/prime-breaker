#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define TRUE 1
#define FALSE 0

void exit(int status);

long unsigned is_number_prime(long unsigned number){

    // basic cases
    if (number < 2) return FALSE;
    if (number == 2) return TRUE;
    if (number % 2 == 0) return FALSE;

    // using Sieve of Eratosthenes to find prime numbers more efficiently
    for (long unsigned i = 3; i <= sqrt(number); i += 2){
        if (number % i == 0) return FALSE;
    }
    return TRUE;
}


void main(int argc, char* argv[]){

    // check if there are enough arguments
    if ( argc < 2 ){
        puts("error: missing target prime number argument");
        exit(0);
    }

    long unsigned target_prime = strtoul(argv[1], NULL, 10); // put here the number to be found
    long unsigned fir_prime = 2, sec_prime = 2; // 0 and 1 are not valid numbers

    // generate numbers infinitely
    while(TRUE){
        if ( is_number_prime( fir_prime ) )
            sec_prime = 2; // restart variable

            // just for testing
            // printf("__TESTING %ld __\n", fir_prime);

            // test all combinations for multiplying values
            // if the two prime number multiplied are the
            // target number, return values and break
            while ( sec_prime <= fir_prime ){
                if ( is_number_prime( sec_prime ) ){
                    if ( ( fir_prime * sec_prime ) == target_prime ){
                        puts("__COMBINATION FOUND__");
                        printf("first_number:%ld\nsecond_number:%ld\ntarget_number:%ld\n", fir_prime, sec_prime, target_prime);
                        exit(0); // stop code
                    } else {
                        // just for testing
                        // printf("console: %ld did wrong, going to next\n", sec_prime);
                    } 
                }
                ++sec_prime; // update value for next loop iteration
            }   
        ++fir_prime; // update value for next loop iteration
    }
}