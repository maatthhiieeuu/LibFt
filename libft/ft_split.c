/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_split.c                         ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/19  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include <stdlib.h>
#include "libft.h"

size_t	count_adress_necessary(char const *str, char c);
char	**allocation_result(size_t tab_len);
int		account_allocates_sentence_length(char *str, char c, char **result);
void	initialization_substrings(char *str, char **result, char c, size_t tab_len);
void	free_result(char **result, size_t tab_len);

char	**ft_split(char const *s, char c)
{
	if(!s)
		return(NULL);

	char	**result	= NULL;
	char	*str		= (char *)s;
	size_t	tab_len		= 0;

	tab_len = count_adress_necessary(str, c);
	result 	= allocation_result(tab_len);

	if(!result)
		return(NULL);

	if(!account_allocates_sentence_length(str, c, result))
	{
		free_result(result, tab_len);
		return(NULL);
	}

	initialization_substrings(str, result, c, tab_len);

	return(result);	
}

/******    Calcul du nombre d'adresse nécessaire pour le tableau result    ******/
size_t	count_adress_necessary(char const *str, char c)
{
	if(!str)
		return(0);

	size_t			tab_len	= 0;
	size_t			i		= 0;
	unsigned int	flag	= 0;

	while(str[i] != '\0')
	{
		if(str[i] != c && flag == 0)
			flag = 1;

		if((str[i] == c || str[i + 1] == '\0') && flag == 1)
		{
			tab_len++;
			flag = 0;
		}

		i++;
	}

	return(tab_len);
}

/******    Initialisation du tableau result    ******/
char	**allocation_result(size_t tab_len)
{
	char	**result	= NULL;

	result = (char **)malloc((tab_len + 1) * sizeof(char *));

	if(!result)
		return(NULL);

	return(result);
}

/******    Calcul de la taille des string déclaration et initialisations des pointeurs du tableau result    ******/
int	account_allocates_sentence_length(char *str, char c, char **result)
{
	if(!str || !result)
		return(0);

	size_t			str_len	= 0;  
	size_t			i		= 0;
	size_t			j		= 0;
	unsigned int 	flag	= 0;

	while(str[i] != '\0')
	{
		if(str[i] != c)
		{
			str_len++;
			flag = 1;
		}

		if((str[i] == c || str[i + 1] == '\0') && flag == 1)
		{
			result[j] = (char *)malloc((str_len + 1) * sizeof(char));

			if(!result)
				return(0);

			str_len = 0;
			j++;
			flag = 0;
		}

		i++;
	}

	if(str[i] == '\0')
		result[j] = NULL;

	return(1);
}

/******    Ecriture des sous-chaînes    ******/
void	initialization_substrings(char *str, char **result, char c, size_t tab_len)
{
	if(!str || !result)
		return;

	size_t			i		= 0;
	size_t			j		= 0;
	size_t			k		= 0;
	unsigned int	flag	= 0;

	while(str[i] != '\0')
	{
		if(str[i] != c)
		{
			if(result[j] == NULL)
			{
				free_result(result, tab_len);
				return;
			}

			result[j][k] = str[i];
			k++;
			flag = 1;
		}
		else if(str[i] == c && flag == 1)
		{
			result[j][k] = '\0';
			j++;
			k = 0;
			flag = 0;
		}

		i++;
	}

	if(j < tab_len && result[j] != NULL)
		result[j][k] = '\0';
}

void	free_result(char **result, size_t tab_len)
{
	size_t	i	= 0;

	while(i < tab_len)
	{
		if(result[i])
			free(result[i]);

		i++;
	}

	free(result);
}

/*

Function name:		ft_split

Prototype:			char **ft_split(char const *s, char c);

Paramètres:			s: La chaîne de caractères à découper.
					c: Le caractère délimiteur.

Valeur de retour:	Le tableau de nouvelles chaînes de caractères
					résultant du découpage.
					NULL si l’allocation échoue.
Fonctions
 ex-
ternes autorisées:	malloc, free

Description:		Alloue (avec malloc(3)) et retourne un tableau
					de chaînes de caractères obtenu en séparant ’s’ à
					l’aide du caractère ’c’, utilisé comme délimiteur.
					Le tableau doit être terminé par NULL.

*/