#include<stdio.h>

typedef unsigned char Byte_t;

int main(int argc, char ** argv)
{
	Fd = fopen(argv[1], "r");

	while (fgets(String, sizeof(String), Fd)) {
		while ((sscanf(String + Offset , "\\x%x%n", &HexVal, &Count)) == 1) {

	fclose(Fd);

}
