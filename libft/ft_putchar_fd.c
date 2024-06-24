/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_putchar_fd.c                    ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/24  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/24  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	if(fd < 0)
		return;
	ft_write_check(fd, &c, sizeof(c));
}

/*

Function name:	ft_putchar_fd
 
Prototype:	void ft_putchar_fd(char c, int fd);
 
Paramètres:	c: Le caractère à écrire.
			fd: Le descripteur de fichier sur lequel écrire.

Valeur de retour:	Aucune

Fonctions externes autorisées:	write

Description:	Écrit le caractère ’c’ sur le descripteur de
				fichier donné.
 
*/