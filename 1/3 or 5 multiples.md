### Problem:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6, and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

### Pseudocode:

initialise threshold = 1000
initialise sum = 0
loop through numbers until threshold
   if number % (modulus) 3 = 0 OR number % 5 = 0
          sum = number + sum
finish loop and return sum