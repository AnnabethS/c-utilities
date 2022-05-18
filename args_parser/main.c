#include <stdio.h>
#include "args_parser.h"

int main(int argc, char** argv)
{
	args_parser(argc, argv);
	printf("hello world!\n");
	return 0;
}
