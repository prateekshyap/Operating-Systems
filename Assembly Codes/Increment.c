#include <stdio.h>

void main()
{
	int x = 1, y = 0;

	printf("x = %d\n",x);

	//incrementing x by 1
	asm("incl %0" : "=r"(x) : "r"(x));

	printf("x = %d\n",x);

	//incrementing x by 1 again with same input and output register
	asm("incl %0" : "+r"(x));

	printf("x = %d\n\n",x);

	printf("x = %d, y = %d\n",x,y);

	//incrementing x but storing in y
	asm("incl %0" : "=r"(y) : "r"(x));

	printf("x = %d, y = %d\n",x,y);
}