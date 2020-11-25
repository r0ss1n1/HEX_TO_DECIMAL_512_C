#include <stdio.h>
#include <Windows.h>
#include <synchapi.h>

int main(void) {
	printf("Quick hex script, better done by rule\n");
	printf("Practice in C, format strings and default packet sizes\n");
	printf("Nice to be able to whip up a quick C program, an ambition\n");
	printf("I have had, to spuriously be able to do so, since 2007 or so\n");
	printf("512 is defined by Microsoft as a default char pointer / array\n");
	printf("size for WINSOCK2 SOCK_STREAM TCP packets\n");
	printf("Only C++ allows for a char * or char array defined I think as a\n");
	printf("classification of vector to allow for null-terminated strings to\n");
	printf("contain null bytes.\n");
	printf("Hexadecimal to Decimal, 1 to 512, Charles Thomas Wallace Truscott\n");
	printf("github.com/r0ss1n1\n");
	SleepEx(12000, 1);
	for(int i = 0; i <= 512; ++i){
		printf("Hex: %x\t Decimal number:%d\n", i, i);

	}


	return 0;
}