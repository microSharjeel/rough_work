#include "stdio.h"
int main()

{
	int * y;
	y = new int; 
	
	printf("garbage value of pointer %d\n",*y);
	printf("address of pointer %d\n",&y);
	return 0;
	
}
