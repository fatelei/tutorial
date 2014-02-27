/*
 * 提取子串
 */

#include <stdio.h>
#include <string.h>

int
substr( char dst[], char src[], int start, int len ) {
	int i = 0;
	int j = 0;
	int src_length = strlen(src);
	
	for ( i = start; i < src_length && j < len; i++ ) {
		dst[j++] = src[i];
	}

	dst[j] = 0x0;
	return j;
}

int
main() {
	char src[100] = "hello world";
	char dst[100];
	int start;
	int len;
	int sub_len;

	scanf( "%d %d", &start, &len );
	if ( start < 0 || len < 0 ) {
		dst[0] = 0x0;
	} else if ( start > strlen(src) ) {
		dst[0] = 0x0;
	}
 
	sub_len = substr( dst, src, start, len );
	printf( "%s: %d\n", dst, sub_len );
	return 0;
}