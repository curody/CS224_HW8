#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "CmaConfig.h"
#include "cma.h"

#define MSIZE 1024*16
unsigned char mem[MSIZE];

int main(int argc, char * argv[]) {
	printf("%s Version %d.%d\n",argv[0],
		Cma_VERSION_MAJOR, Cma_VERSION_MINOR);
	printf("Usage: %s\n",argv[0]);

	int i;
	char *strings[10];
	class_memory(mem,MSIZE); // give it memory allocator

	for (i = 0; i<10; i++)
		strings[i] = (char *)class_malloc(1024); //allocate from classmem library
	for (i = 9; i>=0; i--) 
		class_free(strings[i]);
	class_stats();
}
