/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_isdigit.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/11  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"

int	ft_isdigit(int character)
{
	if(character >= 48 && character <= 57)
	{
		return (2048);
	}

	return (0);	
}

//Cette fonction permet de tester si un caractère est un chiffre décimal ou non. 