#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define TRUE 1
#define FALSE 0

long unsigned is_number_prime(long unsigned number)
{
    if (number <= 1) return FALSE;
    if (number % 2 == 0) return FALSE;
    for (long unsigned i = 3; i <= sqrt(number); i += 2)
        if (number % i == 0) return FALSE;

    return TRUE; // if none of the conditions are met, the number is prime
}


int main(int argc, char *argv[])
{
	// Argument parsing
	if ( argc != 2 ){
		fprintf(stdout, "Usage: %s <target>", argv[0]);
		return 1;
	}

	// Prime breaker algorithm
	long unsigned target_prime = strtoul(argv[1], NULL, 10);
	long unsigned fir_prime, sec_prime;
	for (fir_prime = 2; fir_prime < target_prime; ++fir_prime){
		if (is_number_prime(fir_prime) && pow(fir_prime, 2) > target_prime ){
			for (sec_prime = 2; sec_prime <= fir_prime; ++sec_prime){
				if (is_number_prime(sec_prime)){
					if ((fir_prime * sec_prime) == target_prime){
						// Print combination found
						fprintf(stdout, "__COMBINATION FOUND__\n");
						fprintf(stdout, "First number:\t%ld\nSecond number:\t%ld\nTarget number:\t%ld\n",
								 fir_prime, sec_prime, target_prime);

						return 0;
					}
				}
			}
		}
	}
	fprintf(stdout, "Number not found!\n");

	return 0;
}
