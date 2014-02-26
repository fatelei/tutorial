/*
 * 打印 1 - 100 以内的质数
 */

#include <stdio.h>
#include <math.h>

int
prime ( int num ) {
	int i 		= 0;
	int mid 	= sqrt(num);
	int flag 	= 1;

	for ( i = 3; i <= mid; i++ ) {
		if ( num % i == 0 ) {
			flag = 0;
			break;
		}
	}

	if ( flag ) {
		return 1;
	}
	
	return 0;
}

int
main () {
	int i = 0;

	for ( i = 1; i <= 100; i++ ) {
		if ( i == 1) {
			printf ( "1\n" );
		} else if ( i % 2 != 0 ) {
			int result = prime(i);
			if ( result == 1 ) {
				printf ( "%d\n", i );
			}
		}
	}
	return 0;
}