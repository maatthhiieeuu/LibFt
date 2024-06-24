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

#include "libft.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

void ft_putendl_fd(char *s, int fd)
{
	if(fd < 0 || !s)
		return;

	while(*s != '\0')
	{
		if(ft_write_check(write(fd, s, 1)) == -1)
		return;
		s++;
	}
	if(ft_write_check(write(fd, "\n", 1)) == -1)
		return;
}
/*

Function name:					ft_putendl_fd

Prototype:						void ft_putendl_fd(char *s, int fd);

Paramètres:						s: La chaîne de caractères à écrire.
								fd: Le descripteur de fichier sur lequel écrire.

Valeur de retour:				Aucune

Fonctions externes autorisées:	write

Description:					Écrit La chaîne de caractères ’s’ sur le
								descripteur de fichier donné suivie d’un retour à
								la ligne.

*/