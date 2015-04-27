// For vim user compile with : :w !gcc *.c -o main
// For cmd.exe compile with : gcc *.c -o main

// Program Usage : main.exe (command) (value)
#include <stdio.h>
#include <stdlib.h>

#include "factorial.h"
#include "sum.h"
#include "difference.h"
#include "product.h"


int main ( int arc, char **argv) {
	// Loop Counter
	int i;
	
	// Welcome Message
	printf("Simple Calculator Software\r\n");
	
	// Test Factorial Function
	printf("Testing : Factorial Function\r\n");
	
	for (i = 0; i < 11; i++) {
		printf("\r\nfindFac %d -> %d\r\n", i, findFac(i));
	}
	
	printf("%s", argv[1]);



	return 0;
}
