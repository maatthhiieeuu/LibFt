/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : ft_libft/ft_bintohex.c                   ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/08/07  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/13  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"

char	*ft_bintohex(char *bin)
{
	if(!bin)
		return(NULL);

	typedef struct s_table_conv 
	{
		char	*zero;
		char	*one;
		char	*two;
		char	*three;
		char	*four;
		char	*five;
		char	*six;
		char	*seven;
		char	*eight;
		char	*nine;
		char	*a;
		char	*b;
		char	*c;
		char	*d;
		char	*e;
		char	*f;
	}t_table_conv;

	const t_table_conv table_conv = 
	{
		.zero	= "0000",
		.one	= "0001",
		.two	= "0010",
		.three	= "0011",
		.four	= "0100",
		.five	= "0101",
		.six	= "0110",
		.seven	= "0111",
		.eight	= "1000",
		.nine	= "1001",
		.a		= "1010",
		.b		= "1011",
		.c		= "1100",
		.d		= "1101",
		.e		= "1110",
		.f		= "1111"
	};

	char			*result	= NULL;
	result					= (char *)malloc(9 * sizeof(char));
	char			*sub	= NULL;
	int				start	= 28;
	int				j		= 32;
	size_t			len		= 4;
	unsigned int	i		= 7;

	if(!result)
		return(NULL);

	ft_memset(result, '0', 8);

	while(j != 0)
	{
		sub		= (char *)malloc(5 * sizeof(char));
		if(!sub)
			return(NULL);
		ft_memset(sub, '\0', 5);
		sub		=	ft_substr(bin, start, len);
		if(!sub)
			return(NULL);

		if(ft_strncmp(sub, table_conv.zero, 4) == 0)
			result[i] = '0';
		else if(ft_strncmp(sub, table_conv.one, 4) == 0)
			result[i] = '1';
		else if(ft_strncmp(sub, table_conv.two, 4) == 0)
			result[i] = '2';
		else if(ft_strncmp(sub, table_conv.three, 4) == 0)
			result[i] = '3';
		else if(ft_strncmp(sub, table_conv.four, 4) == 0)
			result[i] = '4';
		else if(ft_strncmp(sub, table_conv.five, 4) == 0)
			result[i] = '5';
		else if(ft_strncmp(sub, table_conv.six, 4) == 0)
			result[i] = '6';
		else if(ft_strncmp(sub, table_conv.seven, 4) == 0)
			result[i] = '7';
		else if(ft_strncmp(sub, table_conv.eight, 4) == 0)
			result[i] = '8';
		else if(ft_strncmp(sub, table_conv.nine, 4) == 0)
			result[i] = '9';
		else if(ft_strncmp(sub, table_conv.a, 4) == 0)
			result[i] = 'a';
		else if(ft_strncmp(sub, table_conv.b, 4) == 0)
			result[i] = 'b';
		else if(ft_strncmp(sub, table_conv.c, 4) == 0)
			result[i] = 'c';
		else if(ft_strncmp(sub, table_conv.d, 4) == 0)
			result[i] = 'd';
		else if(ft_strncmp(sub, table_conv.e, 4) == 0)
			result[i] = 'e';
		else if(ft_strncmp(sub, table_conv.f, 4) == 0)
			result[i] = 'f';
		else
			result[i] = 'X';

		i--;			
		start	-=	4;
		j		-=	4;
		ft_memset(sub, '\0', 5);
		free(sub);
	}

	result[8] = '\0';
	return(result);
}