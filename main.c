#include <stdio.h>
#include <string.h>

int main(void) {

	// Declarations
	char typed[50];
	

	// ANSI escape code sequence to clear entire screen and position
	// cursor at the top left corner.
	printf("\033[2J\033[H");

	// Enter input
	printf("Enter type: ");
	fgets(typed, sizeof(typed), stdin); 

	// Output
	printf("You Typed: %s\n", typed);

	
	


	return 0;

}


