/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_split.c                    ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/09  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/09  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#define grey "\033[1;30m"
#define red "\033[1;31m"
#define green "\033[1;32m"
#define orange "\033[1;33m"
#define blue "\033[1;34m"
#define d_green "\033[1;35m"
#define purple "\033[1;36m"
#define reset "\033[1;0m"

char	**ft_split(char const *s, char c);

int	main()
{
	char	*str = "1e2e3e4e5e6e7e8e9eAeBeCeDeEeFeGeHeIeJeKeLeMeNeOePeQeReSeTeUeVeWeXeYeZ";
	char	set = 'e';
	char	**result = NULL;
	size_t	i = 0;
	size_t	j = 0;

	result = ft_split(str,set);

	printf(orange"test 1 :\n"reset);
	while(!result[i])
	{
		printf(blue"result[%ld] = |%s|\n"reset, i, result[i]);
		i++;
	}
	printf(green"FIN DES TESTS.\n\n"reset);
	j = 0;
	while(result[j] != NULL)
	{
		j++;
	}
	free(result[j]);
	j = 0; 
	while(result[j])
	{
		free(result[j]);
		j++;
	}
	free(result);
}
