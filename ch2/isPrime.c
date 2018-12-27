#include <stdio.h>
#include <stdlib.h>

int isPrime (int a) {
	int i;
	if (a != 2 && a % 2 == 0)
		return 0;

	for (i = 3; i * i <= a; i += 2) {
		if (a % i == 0) {			                
			return 0;
		}
	}
	return 1;
}

int main(void) {
	    int inputNumber;

	    printf("Enter a positive integer to find whether it is prime or not: ");
	    scanf("%d", &inputNumber);
		    
	    if (isPrime(inputNumber)) {
		    printf("The given number is a prime number\n");
	    } 
	    else {
		    printf("The given number is not a prime number\n");
	    }
}
