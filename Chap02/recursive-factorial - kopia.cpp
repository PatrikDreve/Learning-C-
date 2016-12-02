//recursive-factorial copy, by Patrik Drevestedt
//for educational purposes, only

#include <cstdio>

using namespace std;

unsigned long int factorial(unsigned long int n) {
	if (n < 2) return 1;
	return factorial(n - 1) * n;
}

int main(int argc, char ** argv) {
	unsigned long int n = 3;
	printf("Factorial of %ld is: %ld\n", n, factorial(n));
	return 0;
}