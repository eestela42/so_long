#include "so_long.h"

void	error(int i)
{
	if	(i == 0 || i == 12)
		return ;
	printf("Error\n");
	if (i == 1)
		printf("Malloc in ft_map\n");
	if (i == 2)
		printf("In Cut (ft_map) no str\n");
	if (i == 3)
		printf("Malloc map\n");
	if (i == 4)
		printf("Malloc line of tab map\n");
	if (i == -1)
		printf("Unknown char in Map\n");
	if (i == 5)
		printf("Element(s) missing in Map\n");
	if (i == -2)
		printf("Too many Start (P)\n");
	if (i == 6)
		printf("Error in Map\n");
	if (i == 7)
		printf("Map is not rectangular\n");
	if (i == 63)
		printf("Error in convert Sprite\n");
	if (i == -4)
		printf("ERROR IN MAP NAME\n");
	if (i == 666)
		printf("You HAVE DIED\n");
}
