/*
 * 根据公式 ai+1 = ( ai + n / ai ) / 2，求n的算术平方根
 */

#include <stdio.h>

int
main () {
	float a1		= 1;
	float current	= 0;
	int n			= 0;

	scanf( "%d", &n );

	while ( 1 ) {
		current = ( a1 + (n / a1) ) / 2;
		if ( current == a1 ) {
			break;
		} else {
			printf( "%f\n", current );
			a1 = current;
		}
	}
	printf( "%f\n", current );
	return 0;
}
