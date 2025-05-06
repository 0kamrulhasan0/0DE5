#include <stdio.h>

/* Now, without editing the code, try to edit the 
 * compiled program so that it will always print 
 * 'Welcome to 0DE5' no matter what character is 
 * entered. */

int main() {
	char target;
	printf("Enter Char: ");
	scanf("%c", &target);
	if (target=='Q') {
		printf("Welcome to 0DE5!\n");
	}
	//printf("You have Entered - %c", target);
}
