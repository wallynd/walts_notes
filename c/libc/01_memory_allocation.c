#include <stdio.h> /* printf */
#include <stdlib.h> /* malloc, calloc, free */


///////////////////////////////////////////////////////////////////////////////
//
// Variable Memory Allocation
//
// C supports two kinds of memory allocation of variable Static and Automatic
//
///////////////////////////////////////////////////////////////////////////////

/////////////////////////////
// Static Allocation

// static keyword is optional outside function context
static int g_staticVariable1 = 1;
int g_staticVariable2 = 1;

// extern keyword declares a variable
extern int g_staticVariable3;
int g_staticVariable3 = 1;

void
staticAllocation()
{
     static int localVariable1 = 1;
}

/////////////////////////////
// Automatic Allocation
void
automaticAllocation(int automaticVariable1)
{
     int automaticVariable2 = 1;
     {
     	int automaticVariable3 = 1;
     }
}

/////////////////////////////
// Register Allocation

void
registerAllocation()
{
	 // the compiler will assign a cpu register to this variable
     register int localVariable2 = 1;

     // register variables dont have addresses
     // printf("%p\n", &localVariable2); /* this will fail at compile time */
}


//Dynamic Allocation
void
dynamicAllocation()
{
	/* malloc returns a pointer to the memory block or null on failure */	
    int *dynamicMemory1 = malloc(sizeof(int));
    printf("default-aligned addr: %p\n", (void*)dynamicMemory1);
    free(dynamicMemory1);

    /* calloc allocates an array of memory blocks all memset to 0 */
    int *dynamicMemory2 = calloc(sizeof(int),1);
    free(dynamicMemory2);

    /* realloc increases???changes an allocated memory block */
    int *dynamicMemory3 = malloc(sizeof(int));
    int *dynamicMemory4 = realloc(dynamicMemory3, 10 * sizeof(int));
    free(dynamicMemory3);
    free(dynamicMemory4);

    /* aligned_alloc allocates to a non-standard boundary */
    /* align to page boundaries or for hardware considerations */
    int *dynamicMemory5 = posix_memalign(1024, 10 * sizeof(int));
    printf("1024-byte aligned addr: %p\n", (void*)dynamicMemory4);
    free(dynamicMemory5);	

}


int
main()
{
     staticAllocation();
     registerAllocation();
     printf("Hello World!\n");
}
