/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : ft_libft/ft_bintoi.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/08/19  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/19  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"
#include "ft_bintoi.h"

int	ft_bintoi(char *bin, char *sign)
{
	if(!bin)
		return(-1);

	int		result	= 0;
	char	*temp	= (char *)malloc(9 * sizeof(char));
	if(!temp)
		return(-1);

	ft_memset(temp, '\0', 8);

	temp	= ft_bintohex(bin, sign);
	printf(GREEN"\n|%s|\n"BC, temp);
	result	= ft_hextoi(temp, sign);

	free(temp);

	return(result);
}

ssize_t	ft_hextoi(char	*hex, char *sign)
{

	/*

complement à deux inverser pour les negatif .


	*/
	if(!hex)
		return(-1);

	size_t			factor			= ft_strlen(hex) - 1;
	ssize_t				result			= 0;
	ssize_t			factor_result	= 0;
	int				i				= 0;

	if(sign == '-')
	{

	}
	while(hex[i] != '\0')
	{
		printf(BLUE"\nresult = %ld i = %d\n"BC, result, i);

		if(ft_isalpha(hex[i]) != 0)
		{

			if(hex[i] == 'a' || hex[i] == 'A')
			{
				factor_result = factorization(factor);
				result += 10 * factor_result;
			}
			else if(hex[i] == 'b' || hex[i] == 'B')
			{
				factor_result = factorization(factor);
				result += 11 * factor_result;
			}
			else if(hex[i] == 'c' || hex[i] == 'C')
			{
				factor_result = factorization(factor);
				result += 12 * factor_result;
			}
			else if(hex[i] == 'd' || hex[i] == 'D')
			{
				factor_result = factorization(factor);
				result += 13 * factor_result;
			}
			else if(hex[i] == 'e' || hex[i] == 'E')
			{
				factor_result = factorization(factor);
				result += 14 * factor_result;
			}
			else if(hex[i] == 'f' || hex[i] == 'F')
			{
				printf(GREEN"result = %ld + 15 x 16^%ld = ", result, factor);
				factor_result = factorization(factor);
				printf("\n                        result = %ld + 15 x %ld = ", result, factor_result);
				result += 15 * factor_result;
				printf("\n                        result = %ld"BC, result);
			}
			else
			{
				perror(RED"\nLettre non comprise entre A-F.\n"BC);
				return(-1);
			}
		}
		else if(ft_isdigit(hex[i]) != 0)
		{
			if(hex[i] >= '0' && hex[i] <= '9')
			{
				factor_result = factorization(factor);
				result += (hex[i] - 48) * factor_result;
			}
			else
			{
				perror(RED"\nLettre non comprise entre 0-9.\n"BC);
				return(-1);
			}
		}
		else
		{
			perror(RED"\nLettre non comprise entre 0-F.\n"BC);
			return(-1);
		}

		i++;
		factor--;
	}
	printf(BLUE"\nresult = %ld i = %d\n"BC, result, i);
	
	printf("return(%ld)\n", result);
	return(result);
}

void	complement_reverse(char* hex)
{
	if(!hex)
	{
		perror("\n\nErreur complement_reverse\n\n");
		return;
	}

	int i = 31;
	int flag = 1;

	while(i >= 0)
	{
		if(hex[i] == '1' && flag == 1)
		{
			hex[i] = '0';
		}
		else if(hex[i] == '0' && flag == 1)
		{
			hex[i] = '1';
			flag = 0;
		}
		i--;
	}
}

size_t	factorization(size_t factor)
{
	size_t	result	= 16;
	int	c_factor	= (int)factor;

	if(factor == 0)
		return(1);

	while(c_factor != 1)
	{
		printf(BC"16^%d = \n                   %zu x 16 = ",c_factor, result);
		result *= 16;
		c_factor--;
	}
	printf("%zu\n"GREEN, result);
	return(result);
}

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

void	*ft_memset(void *pointer, int value, size_t count)
{
	if(!pointer || count == 0)
		return(NULL);

	unsigned char	*memoryBloc	= (unsigned char *)pointer;
	unsigned char	character	= (unsigned char)value;
	size_t			i			= 0;
	
	while(i < count)
	{
		*memoryBloc = character;
		memoryBloc++;
		i += 1;
	}

	return (pointer);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i		= 0;
	char	*ptr	= NULL;
	ptr 			= (char	*)malloc((len + 1) * sizeof(char));
	if(!ptr || !s)
		return(NULL);

	size_t	len_source = ft_strlen(s);

	if(start > len_source - len)
	{
		ptr[i] = '\0';
		return(ptr);
	}
	
	while(s[start + i] != '\0' && i < len)
	{
		ptr[i] = s[start + i];
		i += 1;
	}

	ptr[i] = '\0';


	return(ptr);
}

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	if(!first || !second)
		perror("Error fonction strncmp");

	size_t	i	= 0;

	while(first[i] != 0 && second[i] != 0 && i < length)
	{
		if(first[i] != second[i])
			return(first[i] - second[i]);
		
		i += 1;
	}

	return(first[i] - second[i]);
}
size_t	ft_strlen(const char *string)
{
	if(!string)
		return(0);

	size_t	len	= 0;

	while(string[len] != '\0')
	{
		len += 1;
	}
	
	return (len);
}
int	ft_isalpha(int character)
{
	if(character > 64 && character < 91)
		return (1024);
	else if(character > 96 && character < 123)
		return (1024);

	return (0);
}
int	ft_isdigit(int character)
{
	if(character >= 48 && character <= 57)
	{
		return (2048);
	}

	return (0);	
}