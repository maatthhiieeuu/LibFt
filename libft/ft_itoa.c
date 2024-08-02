/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_itoa.c                          ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/20  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/27  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stdlib.h>

size_t	count_char_number(int n_cpy, int *sign);
char	*allocate_string(char *result, size_t len_number);
char	*initialization_exit(int n_cpy, char *result, size_t len_number, int sign);
char	*init_limit_exit(int n_cpy, char *result);

char	*ft_itoa(int n)
{
	char	*result		= NULL;
	int		sign		= 1;
	size_t	len_number	= 0;
	int		n_cpy		= n;

	len_number	= count_char_number(n_cpy, &sign);
	if(len_number == 0)
		return(NULL);
	result		= allocate_string(result, len_number);
	if(!result)
		return(NULL);
	if(n == -2147483648 || n == 2147483647)
		result = init_limit_exit(n_cpy, result);
	else
		result = initialization_exit(n_cpy, result, len_number, sign);

	return(result);
}

//compte le nombre de caractere qui compose le nombre moin inclus 
size_t	count_char_number(int n_cpy, int *sign)
{
	if(!sign)
		return(0);

	size_t	len_number	= 0;
	
	if(n_cpy < 0)
	{
		*sign = -1;
		len_number++;
	}
	if(n_cpy == 0)
		len_number = 1;
	while(n_cpy != 0)
	{
		len_number++;
		n_cpy /= 10;
	}

	return(len_number);
}

char	*allocate_string(char *result, size_t len_number)
{
	if(!result)
	{
		result = (char *)malloc((len_number + 1) * sizeof(char));
		if(!result)
			return(NULL);
	}

	return(result);
}

char	*initialization_exit(int n_cpy, char *result, size_t len_number, int sign)
{
	if(!result)
		return(NULL);

	int		temp		= 0;
	size_t	i			= 0;
	size_t	last_digit	= len_number;

	if(sign < 0)
	{
		*result = '-';
		n_cpy *= -1;
		last_digit -= 1;
	}
	result[len_number] = '\0';
	len_number--;
	while(i < last_digit)
	{
		temp = n_cpy % 10;
		n_cpy /= 10;
		result[len_number] = temp + 48;
		len_number--;
		i++;
	}

	return(result);
}

char  *init_limit_exit(int n_cpy, char *result)
{
	if(!result)
		return(NULL);

	char	*int_min	= "-2147483648";
	char	*int_max	= "2147483647";
	size_t	i			= 0;

	if(n_cpy == -2147483648)
	{
			while(i < 11)
			{
				result[i] = int_min[i];
				i++;
			}
			result[11] = '\0';
	}
	if(n_cpy == 2147483647)
	{
			while(i < 10)
			{
				result[i] = int_max[i];
				i++;
			}
			result[10] = '\0';
	}

	return(result);
}



/*

Function name:					ft_itoa

Prototype:						char *ft_itoa(int n);

Paramètres:						n: L’entier à convertir.

Valeur de retour:				La chaîne de caractères représentant l’entier.
								NULL si l’allocation échoue.

Fonctions externes autorisées:	malloc

Description:					Alloue (avec malloc(3)) et retourne une chaîne
								de caractères représentant l’entier ’n’ reçu en
								argument. Les nombres négatifs doivent être gérés.

*/