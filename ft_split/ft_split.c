/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_split.c                         ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/09  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/09  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

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