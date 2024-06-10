/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_split.c                         ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdlib.h>
//#include <>

char	**ft_split(char const *s, char c)
{
	if(!s)
		return(NULL);

/******    Initialisation des variables    ******/
	char	**result = NULL;
	char	*str = (char *)s;
	size_t	i = 0;
	size_t	j = 0;
	size_t	k = 0;
	size_t	tab_len = 1;
	size_t	str_len = 0;

/******    Calcul du nombre d'adresse nécessaire pour le tableau result    ******/
	while(str[i] != '\0')
	{
		if(str[i] != c)
			tab_len++;
		i++;
	}

/******    Initialisation du tableau result    ******/
	result = (char **)malloc((tab_len) * sizeof(char *));
	if(!result)
		return(NULL);

/******    Calcul de la taille et initialisations des pointeurs du tableau result    ******/
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] != c)
			str_len++;
		else if(str[i] == c)
		{
			result[j] = (char *)malloc((str_len + 1) * sizeof(char));
			if(!result[j])
				return(NULL);
			j++;
			str_len = 0;
		}
		i++;
	}
	result[j] = NULL;

/******    Ecriture des sous-chaînes    ******/
	i = 0;
	j = 0;
	while(str[i] != '\0' && result[j] != NULL)
	{
		while(str[i] != c)
		{
			result[j][k] = str[i];
			i++;
			k++;
			if(str[i] == c)
				result[j][k] = '\0';
		}
		while(str[i] == c)
		{
			i++;
		}
		j++;
		k = 0;
	}

/******    Retour de la fonction    ******/
	return(result);	
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