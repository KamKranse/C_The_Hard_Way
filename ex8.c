#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name [] = "Zed";
	char full_name[] = {
		'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0'
};

//warning: on some systems you may have to change the
// %ld in this code to %u since it will use unsigned ints.
	printf("The size of an int: %ld \n", sizeof(areas));
	printf

