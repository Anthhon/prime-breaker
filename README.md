# prime-number-breaker

This C program is designed to find two prime numbers that multiply to a target prime number.
The program uses an efficient prime number checking algorithm based on the Sieve of Eratosthenes to quickly determine
if a number is prime or not. The program also includes a timer to measure how long it takes to find the two prime numbers.

The Sieve of Eratosthenes function  quickly check if a number is prime by iterating over odd numbers from 3 to the square
root of the number and checking if the number is divisible by any of these numbers.
If the number is not divisible by any of these numbers, it is considered prime and
the function returns TRUE. Otherwise, the function returns FALSE.

Overall, this program is a simple and efficient way to find two prime numbers that multiply to a given
