/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_putendl_fd.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/24  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/24  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <unistd.h>

ssize_t	ft_write_check(ssize_t output)
{
	if(output == -1)
		perror("write");

	return(output);
}

void ft_putnbr_fd(int n, int fd)
{
	if(fd < 0)
		return;

	char	c	= 0;

	if(n < 0)
	{
		if(ft_write_check(write(fd, "-", 1)) == -1)
			return;
		n *= -n;
	}
	if(n >= 0 && n <= 9)
	{
		if(ft_write_check(write(fd, &n, 1)) == -1)
			return;
	}
	if(n > 9)
	{
		
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