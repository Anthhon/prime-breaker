#include<stdio.h>
#include<time.h>

#define TRUE 1
#define FALSE 0

void exit(int status);

long unsigned number_is_prime(long unsigned number){

    int is_prime = TRUE; // start variable

    if ( number > 1 ){
        // verify if parameter number is prime
        for ( unsigned iter = 2 ; iter < ( number / 2 ) + 1 ; ++iter ){
                    if ( number % iter == 0 ){
                        is_prime = FALSE; // define as not prime
                        break; // go to next number
                    }
        }
    } else is_prime = FALSE; // return false for 0 and 1

    if ( is_prime == TRUE ) return TRUE;
    else return FALSE;
}

void main(void){

    // TIMER VARIABLES
	clock_t start, end;
    start = clock();

    long unsigned target_number = 601279297; // put here the number to be found
    long unsigned new_number = 2, sec_number = 2; // 0 and 1 are not valid numbers

    // generate numbers infinitely
    while(TRUE){
        if ( number_is_prime( new_number ) )
            sec_number = 2; // restart variable

            // just for testing
            // printf("__TESTING %ld __\n", new_number);

            // test all combinations for multiplying values
            // if the two prime number multiplied are the
            // target number, return values and break
            while ( sec_number <= new_number ){
                if ( number_is_prime( sec_number ) ){
                    if ( ( new_number * sec_number ) == target_number ){
                        puts("__COMBINATION FOUND__");
                        printf("first_number:%ld\nsecond_number:%ld\ntarget_number:%ld\n", new_number, sec_number, target_number);

                        // TIMER OUTPUT 
                        double duration = (((double)end - start)/CLOCKS_PER_SEC) * 10000;
                        printf("\ntime taken to find value: %.3f seconds\n", duration);
                        end = clock(); // stop clock

                        exit(0); // stop code
                    } else {
                        // just for testing
                        // printf("console: %ld did wrong, going to next\n", sec_number);
                    } 
                }
                ++sec_number;
            }
        
        ++new_number; // update value for next loop iteration
    }

}