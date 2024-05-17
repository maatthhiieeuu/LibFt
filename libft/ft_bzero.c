/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_bzero.c                         ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/15  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/15  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *pointer, size_t n)
{
	ft_memset(pointer, 0, n);
}

/*

bzero - Écrire des octets de valeur zéro dans un bloc d'octets  

*/