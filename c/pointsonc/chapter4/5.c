/*
 * 对输入的文本，如果文本中有两行或更多行的相邻文本，只打印一行
 */

#include <stdio.h>
#include <string.h>

int
main () {
	int flag = 0;
	char input[200];
	char current[200];

	gets(input);
	strcpy( current, input );

	while ( gets(input) != NULL ) {
		if ( strcmp(current, input) == 0 ) {
			flag = 1;
		} else {
			if ( flag ) {
				printf( "%s\n", current );
				flag = 0;
			}
			strcpy( current, input );
		}	
	}
	return 0;
}