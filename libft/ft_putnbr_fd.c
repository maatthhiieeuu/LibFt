/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_putnbr_fd.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/25  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <errno.h>
//#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	if(fd < 0)
		return;

	char	temp_dgt	= 0;

	if(n == -2147483648)
	{
		if(ft_write_check(write(fd, "-2", 2)) == -1)
			return;

		n = 147483648;
		ft_putnbr_fd(n, fd);
	}
	else if(n < 0)
	{
		if(ft_write_check(write(fd, "-", 1)) == -1)
			return;

		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if(n >= 0 && n <= 9)
	{
		n += '0';

		if(ft_write_check(write(fd, &n, 1)) == -1)
			return;

		n = 0;
	}
	else if(n > 9)
	{
		temp_dgt = n % 10;
		n /= 10;
		ft_putnbr_fd(n, fd);
		temp_dgt += '0';
		
		if(ft_write_check(write(fd, &temp_dgt, 1)) == -1)
			return;
	}
}
/*

Function name:					ft_putnbr_fd

Prototype:						void ft_putnbr_fd(int n, int fd);

Paramètres:						n: L’entier à écrire.
								fd: Le descripteur de fichier sur lequel écrire.

Valeur de retour:				Aucune

Fonctions externes autorisées:	write

Description:					Écrit l’entier ’n’ sur le descripteur de fichier
								donné.

*/