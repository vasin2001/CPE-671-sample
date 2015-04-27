// For vim user compile with : :w !gcc *.c -o main
// For cmd.exe compile with : gcc *.c -o main

// Program Usage : main.exe (command) (value)
// Ex. main factorial 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "factorial.h"
#include "sum.h"
#include "difference.h"
#include "product.h"

// Process Terminal Commands
void cmd_selector( int arc, char **argv) {
	
	int value_a, value_b;
	
	if (arc == 3) {
		//printf("%d arc\r\n",arc);
	
		// Factorial Function 
		if (strcmp("factorial", argv[1]) == 0) {
			
			// Convert Input to integer (Using atoi)
			value_a = atoi(argv[2]);
			
			// Calcuate Result
			printf("Cmd : Factorial\r\n");
			printf("\tInput : %d -> Result : %d\r\n", value_a, findFac(value_a));
			
			return;
			
		}
		
		
	
		printf("%s\r\n", argv[1]);
		printf("%s\r\n", argv[2]);
		
	
		
		printf("\r\n");
	} else {
		printf("\r\nError : Invalid Input - Please Try Again");
	}
	
	
	
	
	
	
}


int main (int arc, char **argv) {
	// Loop Counter
	int i;
	
	// Welcome Message
	printf("Simple Calculator Software\r\n");
	
	// Call Command Selector
	cmd_selector(arc, argv);
	
	
	
	/*
	// Test Factorial Function
	printf("Testing : Factorial Function\r\n");
	for (i = 0; i < 11; i++) {
		printf("\r\nfindFac %d -> %d\r\n", i, findFac(i));
	}
	
	*/
	//printf("%s", argv[1]);



	return 0;
}



