/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_bzero.c                    ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/15  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/15  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>		//Pour l'utilisation de printf
#include <string.h>		//Pour l'utilisation de memset
#include <stdlib.h>		//Pour l'utilisation de malloc

void	ft_bzero(void *pointer, size_t n);

int 	main()
{
	size_t i = 0;
	char *memoryBlocFt = (char *)malloc(50 * sizeof(char));
	if(memoryBlocFt == NULL)
	{
		printf("Allocation memoryBlocFt failed.");
		return (0);
	}
	char *memoryBlocOr = (char *)malloc(50 * sizeof(char));
	if(memoryBlocOr == NULL)
	{
		printf("Allocation memoryBlocOr failed.");
		free(memoryBlocFt);
		return (0);
	}


	bzero(memoryBlocOr, 50);
	while(i < 50)
	{
		printf("\033[1;33mmemoryBlocOr[%ld] :\033[1;0m |%c|\n", i, memoryBlocOr[i]);
		i +=1;
	}
	free(memoryBlocOr);
	i = 0;

	printf("\n\n");

	ft_bzero(memoryBlocFt, 50);
	while(i < 50)
	{
		printf("\033[1;34mmemoryBlocFt[%ld] :\033[1;0m |%c|\n", i, memoryBlocFt[i]);
		i +=1;
	}
	free(memoryBlocFt);
	
}