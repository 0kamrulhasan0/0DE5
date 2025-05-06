#include <stdio.h>

void print_binary_from_char(int c) {
	char* bin[8];
	for(int j=7; j>0; j--) {
		bin[7-j]  = (c >> j) && 0b0000001; 
	}
	return bin;
}

int main(int argc, char* argv[]) {
	if (argc == 2) {
		printf("\nASCII:");
		for(int i=0; i<sizeof(argv[1])/sizeof(char); i++) {
			if(argv[1][i]==0) {
				break;
			}
			printf("%8c", argv[1][i]);
		}
		printf("\nHex:  ");
		for(int i=0; i<sizeof(argv[1])/sizeof(char); i++) {
			if(argv[1][i]==0) {
				break;
			}
			printf("%8x", argv[1][i]);
		}
		printf("\nDec   ");
		for(int i=0; i<sizeof(argv[1])/sizeof(char); i++) {
			if(argv[1][i]==0) {
				break;
			}
			printf("%8d", argv[1][i]);
		}
		printf("\nBin:  ");
		for(int i=0; i<sizeof(argv[1])/sizeof(char); i++) {
			if(argv[1][i]==0) {
				break;
			}
			print_binary_from_char(argv[1][i]);
			printf(" ");
		}
		printf("\n");
	}
}

