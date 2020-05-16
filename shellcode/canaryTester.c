#include <stdio.h>
char code[] = "";

int main(int argc, char **argv) {
	int *ret;
	int num;
	sscanf(argv[1],"%d",&num);
	ret = (int *)&ret + num;
	(*ret) = (int *) code;
}