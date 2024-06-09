/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strtrim.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/09  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/09  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	if(!s1)
		return (NULL);

	char	*result = NULL;
	size_t	len_s1 = ft_strlen(s1);
	char	*b_index = (char *)s1;
	char	*e_index = (char *)s1 + len_s1 - 1;
	size_t	i = 0;
	int 	search = 1;
	size_t	len_result = 0;

/*-------   initialisation de begin_index    -------*/
	while(*b_index != '\0' && search == 1)
	{
		
		while(*b_index == set[i] && search == 1)
		{
			
			b_index++; 
			i = 0;
			
		}
		if(*b_index != set[i] && set[i] == '\0')
			search = 0;
		else
			i++;
	}

	i = 0;
	search = 1;

/*-------   initialisation de end_index    -------*/
	while(e_index > s1 && search == 1)
	{
		 while(*e_index == set[i] && search == 1)
        {
          e_index--;
          i = 0;
        }
        if(*e_index != set[i] && set[i] == '\0')
            search = 0;
        else
            i++;
	}

/*-------   initialisation de la taille de result    -------*/
	i = 0;
	if(b_index < e_index)
		len_result = e_index - b_index + 1;

/*-------   allocation dynamique de result    -------*/
	result = (char *)malloc((len_result + 1) * sizeof(char));
	if(!result)
		return(NULL);

/*-------   Remplissage de result    -------*/
	while(b_index <= e_index && i <= len_result && len_result != 1)
	{
		result[i] = *b_index;
		i++;
		b_index++;
	}
	result[i] = '\0';

	return(result);
}

/*

Function name:					ft_strtrim

Prototype:						char *ft_strtrim(char const *s1, char const *set);

Paramètres:s1: 					La chaîne de caractères à trimmer.
								set: Le set de référence de caractères à trimmer.

Valeur de retour:				La chaîne de caractères trimmée.
								NULL si l’allocation échoue.

Fonctions externes autorisées:	malloc

Description:					Alloue (avec malloc(3)) et retourne une copie de
								la chaîne ’s1’, sans les caractères spécifiés
								dans ’set’ au début et à la fin de la chaîne de
								caractères.



-





*/