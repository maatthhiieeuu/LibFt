/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_atoi.c                          ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/03  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stddef.h>

int	ft_atoi(const char *string)
{
	if(!string)
		return(0);

	size_t			i			= 0;
	char			*str		= (char *)string;
	int				flag_sign	= 0;
	int				result		= 0;

	
		while(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		{
			i += 1;
		}
	
		if(str[i] == '-' &&  ft_isdigit(str[i + 1]) && flag_sign == 0)
		{
			flag_sign = -1;
			i += 1;
		}
		else if(str[i] == '+' &&  ft_isdigit(str[i + 1]) && flag_sign == 0)
		{
			flag_sign = 1;
			i += 1;
		}

		while(ft_isdigit(str[i]))
		{
			result = result * 10 + str[i] - 48;
			i += 1;  
		}

		if(flag_sign == 0)
			flag_sign = 1;

		return(result * flag_sign);
}

/*

Entête à inclure:

#include <stdlib.h>  // <cstdlib> en C++

Fonction atoi:

int atoi( const char * theString ); 

Cette fonction permet de transformer une chaîne de caractères, représentant une valeur entière, en 
une valeur numérique de type int. Le terme d'atoi est un acronyme signifiant : ASCII to integer.
la fonction atoi retourne la valeur 0 si la chaîne de caractères ne contient pas une 
représentation de valeur numérique. Du coup, il n'est pas possible de distinguer la chaîne "0" 
d'une chaîne ne contenant pas un nombre entier. Si vous avez cette difficulté, veuillez préférer 
l'utilisation de la fonction strtol qui permet bien de distinguer les deux cas.
Paramètres

    theString : ce paramètre contient la chaîne de caractères à convertir en une donnée de type 
    int.

Valeur de retour:

Si la chaîne à convertir ne contient pas une donnée numérique entière, la valeur 0 vous sera 
retournée. Sinon, une valeur de type int équivalente à la chaîne passée en paramètre vous sera 
retournée. 

*/