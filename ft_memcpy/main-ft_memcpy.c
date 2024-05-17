/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_memcpy.c                        ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/15  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/15  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>		//Pour l'utilisation de printf.
#include <string.h> 	//Pour l'utilisation de memcpy.
#include <stddef.h>		//Pour l'utilisation de size_t.

void	*memcpy(void *destination, const void *source, size_t size);

int	main()
{
	char *source = "La souris verte";
	char destination[16];
	size_t size = 16;

	memcpy(destination, source, size);
	printf("\033[1;32msource : |%s|\ndestination : |%s|\033[1;0m\n", source, destination);

}