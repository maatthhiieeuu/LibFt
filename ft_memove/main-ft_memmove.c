/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_memmove.c                       ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/17  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/17  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>

void * memmove( void * destination, const void * source, size_t size );
/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_memmove.c                  ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/17  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/17  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>

void	*ft_memmove(void *destination, const void *source, size_t size);

int main()
{
	char	*string1 = "le bleu c'est merveilleux.";
	char	dest1[27];
	char	*string2 = "le bleu c'est merveilleux.";
	char	dest2[27];

	memmove(dest1, string1, 27);
	ft_memmove(dest2, string2, 27);

	printf("\033[1;33mmemmove : \nstring1 = |%s|\ndest1 = |%s|\033[1;0m\n\n", string1, dest1);
	printf("\033[1;35mft_memmove : \nstring2 = |%s|\ndest2 = |%s|\033[1;0m\n\n", string2, dest2);

}