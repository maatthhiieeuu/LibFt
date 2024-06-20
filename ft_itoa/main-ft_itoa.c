/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_itoa.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/20  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/20  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

#define o "\033[1;33m"
#define g "\033[1;32m"
#define r "\033[1;31m"
#define rset "\033[1;0m"

char *ft_itoa(int n);

int	main()
{
	int			max 		= INT_MAX;
	long int	n			= INT_MIN + 1;
	int			min 		= INT_MIN;
	long int	i			= 1;
	long int 	count		= 0;

	clock_t start, end;
    double cpu_time_used;

    start = clock();

	char		*result_min = ft_itoa(min);
	printf(o"\nTEST INT_MIN : \n"rset);
	printf(o"\n		|%d|\n		|%s|\n"rset, min, result_min);
	free(result_min);
	getchar();

	while(n <= INT_MAX)
	{
		char		*result = ft_itoa(n);
		printf(o"\nTEST %ld : \n"rset, i);
		printf(o"\n		|%ld|\n		|%s|\n"rset, n, result);
		free(result);
		i++;
		n++;
		count++;
		if(count == 536870911)
		{
			//getchar();
			count = 0;
		}
	}

	char	*result_max = ft_itoa(max);
	printf(o"\nTEST INT_MAX : \n"rset);
	printf(o"\n		|%d|\n		|%s|\n"rset, max, result_max);
	free(result_max);
	//getchar();

	end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Le programme a mis %f secondes pour s'exécuter.\n", cpu_time_used);
}