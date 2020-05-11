#include "Header.h"

int main()
{
	// mat[][] keeps track of position of Queens in current configuration
	char mat[8][8];

	// initalize mat[][] by '-'
	memset(mat, '-', sizeof mat);

	nQueen(mat, 0);

	return 0;
}