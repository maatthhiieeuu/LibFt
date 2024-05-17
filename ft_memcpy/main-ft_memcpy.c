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

void	*ft_memcpy(void *destination, const void *source, size_t size);

int	main()
{
	char *source1 = "La souris verte";
	char *destination1[16];
	char *source2 = "La souris verte";
	char *destination2[16];
	size_t size = 16;

	memcpy(destination1, source1, size);
	ft_memcpy(destination2, source2, size);
	printf("\033[1;32msource : |%s|\ndestination : |%s|\033[1;0m\n", source1, destination1);
	printf("\033[1;34msource : |%s|\ndestination : |%s|\033[1;0m\n", source2, destination2);

}