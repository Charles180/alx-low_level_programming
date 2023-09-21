#include "lists.h"
void __attribute__((constructor)) start(void);
/**
  *start-function that executes before the main function
  */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
