/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_isalpha.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/10   by m.boegler            ###         ###   ###########                 */
/*   Updated: 2024/06/26   by m.boegler           ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"

int	ft_isalpha(int character)
{
	if(character > 64 && character < 91)
		return (1024);
	else if(character > 96 && character < 123)
		return (1024);

	return (0);
}

/*

Cette fonction permet de tester si un caractère est alphabétique ou non. Un caractère sera 
considéré comme alphabétique s'il est de lettres minuscules ou de lettres majuscules. 
Rappel : les fonctions de cette librairie ne traitent que les caractères purs ASCII. Les lettres 
accentuées ne seront donc pas considérées comme des caractères alpha-numériques. 

*/