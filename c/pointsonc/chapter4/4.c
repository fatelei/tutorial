/*
 * 拷贝n个字符到目标数组
 */

#include <stdio.h>

void
copy_n( char dst[], char src[], int n ) {
	int i = 0;
	int j;

	for ( i = 0;;i++ ) {
		if ( i > (n - 1) ) {
			return;
		} else  if ( src[i] == '\0' ) {
			break;
		} else {
			dst[i] = src[i];
		}
	}

	for ( j = i; j < n; j++ ) {
		dst[j] = '\0';
	}
	return;
}

int
main () {
	char dst[100];
	char src[100] = "hello world";
	int n;

	scanf( "%d", &n );
	copy_n(dst, src, n);
	printf( "%s\n", dst );

	return 0;
}