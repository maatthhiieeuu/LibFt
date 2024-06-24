/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_write_check.c                   ::::::  ::::::    :::::::::              */
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
#include <errno.h>
#include <stdio.h>

ssize_t	ft_write_check(ssize_t output)
{
	if(output == -1)
		perror("write");

	return(output);
}