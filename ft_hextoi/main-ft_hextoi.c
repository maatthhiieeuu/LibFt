/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : ft_libft/main-ft_hextoi.c                ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/08/14  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/16  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"
//int	ft_hextoi(char	*hex)
#include "ft_hextoi.h"
#include <stdio.h>
#include <limits.h>
#define OT "\033[1;35m"
#define OR "\033[1;33m"
#define GR "\033[1;32m"
#define BE "\033[1;34m"
#define BC "\033[0;0m"

int	main()
{
	int		result	= -1;
	char	*hex_zero	= "00000000";
	char	*hex_neuf	= "00000009";
	char	*hex_f		= "f";
	char	*hex_max	= "7FFFFFFF";
	char	*hex_min	= "80000000";

	printf(OR"\n\n\n-----------------------------------------------------------------------\n"BC);
	printf(OT"Début de la phase de test de la fonction ft_hextoi.\n"BC);
	printf(OR"\nTest 1: chaine 0000 0000\n"BC);

	result = ft_hextoi(hex_zero);

	printf(GR"resultat : 0\nObtenu   : %d\n"BC, result); //0
	result = 0;


	printf(OR"\nTest 2: chaine 0000 0009\n"BC);

	result = ft_hextoi(hex_neuf);

	printf(GR"resultat : 9\nObtenu   : %d\n"BC, result);//9
	result = 0;


	printf(OR"\nTest 3: chaine f\n"BC);

	result = ft_hextoi(hex_f);

	printf(GR"resultat : 15\nObtenu   : %d\n"BC, result);//15
	result = 0;


	printf(OR"\nTest 4: chaine 7FFF FFFF\n"BC);//2147483647

	result = ft_hextoi(hex_max);

	printf(GR"resultat : 2147483647\nObtenu   : %d\n"BC, result);
	result = 0;


	printf(OR"\nTest 5: chaine 8000 0000\n"BC);//2147483648

	result = ft_hextoi(hex_min);

	printf(GR"resultat : -2147483648\nObtenu   : %d\n"BC, result);
	result = 0;

	printf(OR"\nTest 6: chaine 1234 abcd\n"BC);//2147483648

	result = ft_hextoi("1234abcd");

	printf(GR"resultat : 305441741\nObtenu   : %d\n"BC, result);
	result = 0;

	printf(BE"\nFin du test.\n"BC);
printf(OR"-----------------------------------------------------------------------\n\n\n"BC);
}
