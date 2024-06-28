/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_putstr_fd.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/24  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <unistd.h>
//#include <errno.h>
//#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	if(fd < 0 || !s)
		return;

	while(*s != '\0')
	{
		ft_write_check(write(fd, s, 1));
		s++;
	}
}

/*

Function name:					ft_putstr_fd

Prototype:						void ft_putstr_fd(char *s, int fd);

Paramètres:s:					La chaîne de caractères à écrire.
								fd: Le descripteur de fichier sur lequel écrire.

Valeur de retour:				Aucune

Fonctions externes autorisées:	write

Description:					Écrit la chaîne de caractères ’s’ sur le
								descripteur de fichier donné.

*/