#include <stdio.h>      /* printf */
#include <math.h>       /* signbit, sqrt */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("signbit(0.0)       : %d\n", signbit(0.0));
	printf("signbit(1.0/2.0)   : %d\n", signbit(1.0 / 2.0));
	printf("signbit(-1.0/2.0)  : %d\n", signbit(-1.0 / 2.0));
	printf("signbit(sqrt(-1.0)): %d\n", signbit(sqrt(-1.0)));
	_getch();
	return 0;
}