/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_putchar_fd.c                    ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"
#include <stddef.h>

void ft_putchar_fd(char c, int fd);

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