 
/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : ft_libft/ft_.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/08/19  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/19  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"
#include "ft_ItoI.h"

int	main()
{
	
	printf(BLUE"\n\n---------------------- Début de la fonction main ----------------------\n\n\n");

	int			i_test 		= 0;
	ssize_t		i_result	= 0;
	char		sign		= '+';

	printf(PURPLE"Integer à convertir = "GREEN"%d\n", i_test);

	char		*bin_result	= (char *)malloc(33 * sizeof(char));
	if(!bin_result)
	{
		perror(RED"\nError bin_result allocation\n"BC);
		return(-1);
	}

	char	*hex_result	= (char *)malloc(9 * sizeof(char));
	if(!hex_result)
	{
		perror(RED"\nError hex_result allocation\n"BC);
		free(bin_result);
		return(-1);
	}

	if(i_test < 0)
		{
			sign = '-';
		}


	while(i_test <= 16)
	{
		if(i_test < 0)
		{
			sign = '-';
		}

		printf(BLUE"Integer à convertir = "GREEN"%d\n", i_test);
		printf(PURPLE"\n\n---------------------- Integer=>( "ORANGE"%d"PURPLE" )  to ", i_test);
	
		bin_result	= ft_itobin(i_test, sign);
	
		printf(PURPLE" binary=>( "ORANGE"%s"PURPLE" ) ----------------------", bin_result);
	
	
	
		printf(PURPLE"\n\n---------------------- binary=>( "ORANGE"%s"PURPLE" )  to ", bin_result);
		hex_result		= ft_bintohex(bin_result);
		printf(PURPLE" hexadecimal=>( "ORANGE"%s"PURPLE" ) ----------------------", hex_result);
	
	
	
		printf(PURPLE"\n\n---------------------- Hexadecimal=>( "ORANGE"%s"PURPLE" )  to ", hex_result);
		i_result = ft_hextoi(hex_result, sign);
		printf(PURPLE"integer converti=>( "ORANGE"%ld"PURPLE" ) ----------------------\n\n", i_result);

		i_test++;
	}
		

	free(bin_result);
	free(hex_result);

	printf(BLUE"\n\n---------------------- Fin de la fonction main ----------------------\n\n\n");
}




