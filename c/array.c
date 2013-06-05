#include <stdio.h>

int main(int argc, char *argv[])
{
	int array[] = { 45, 67, 89 };
	int *array_ptr = array;
	printf("first element:\t%i\n", *array_ptr);
	printf("second element:\t%i\n", *(++array_ptr));
	printf("third element:\t%i\n", *(++array_ptr));

	return 0;
}
