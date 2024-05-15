/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_isalnum.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/14  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/14  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"

int ft_isalpha(int character)
{
	if(character > 64 && character < 91)
		return (1024);
	else if(character > 96 && character < 123)
		return (1024);
	return (0);
}

int ft_isdigit(int character)
{
	if(character >= 48 && character <= 57)
	{
		return 2048;
	}
	return 0;	
}

int ft_isalnum(int character )
{
	if(ft_isalpha(character) || ft_isdigit(character))
		return (8);
	return (0);
}

/*

Cette fonction permet de tester si un caractère est alpha-numérique ou non. Un caractère sera considéré comme alpha-numérique 
s'il est une lettre (minuscule ou majuscule) ou un chiffre. Rappel : les fonctions de cette librairie ne traitent que les 
caractères purs ASCII. Les lettres accentuées ne seront donc pas considérées comme des caractères alpha-numériques. 

*/