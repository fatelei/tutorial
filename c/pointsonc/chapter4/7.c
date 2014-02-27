/*
 * 移除多余的空格
 */

#include <stdio.h>
#include <string.h>

void
deblank( char string[] ) {
	int  i 		 = 0;
	int  length  = strlen(string);
	int  flag	 = 0;
	int  count   = 0;
	int  j		 = 0;

	char tmp[200];

	for ( i = 0; i < length; i++ ) {
		if ( string[i] == ' ') {
			count += 1;
		} else {
			if ( count >= 2 ) {
				count = 0;
				tmp[j++] = ' ';
			}
			tmp[j++] = string[i];
		}
	}
	tmp[j] = 0x0;
	strcpy(string, tmp);
	return;
}

int
main() {
	char target[200];
	gets(target);
	deblank(target);
	printf( "%s\n", target );
	return 0;
}