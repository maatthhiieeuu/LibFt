/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_putnbr_fd.c                ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/25  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/25  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <limits.h>
#define orng "\033[1;33m"
#define rst "\033[1;0m"

void ft_putnbr_fd(int n, int fd);

int	main()
{	
	printf(orng"\n%d\n"rst, INT_MIN);
	ft_putnbr_fd(INT_MIN, 1);
	printf("\n");

	printf(orng"\n-1234567891\n"rst);
	ft_putnbr_fd(-1234567891, 1);
	printf("\n");

	printf(orng"\n-2346\n"rst);
	ft_putnbr_fd(-2346, 1);
	printf("\n");

	printf(orng"\n1\n"rst);
	ft_putnbr_fd(1, 1);
	printf("\n");

	printf(orng"\n48327\n"rst);
	ft_putnbr_fd(48327, 1);
	printf("\n");

	printf(orng"\n1597493267\n"rst);
	ft_putnbr_fd(1597493267, 1);
	printf("\n");

	printf(orng"\n%d\n"rst, INT_MAX);
	ft_putnbr_fd(INT_MAX, 1);
	printf("\n");
}