/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strdup.c                        ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

char	*strdup(const char *source)
{

}
/*

Entête à inclure

#include <string.h>  // <cstring> en C++

Fonction strdup (C2x)

char * strdup( const char * source );

Cette fonction permet de dupliquer une chaîne de caractères.
la fonction strdup alloue une nouvelle zone de mémoire via la fonction malloc afin d'y copier la 
chaîne de caractères initiale. Il est donc impératif de libérer cette zone de mémoire après 
utilisation via la fonction free.

En langage C, les chaînes de caractères sont qualifiées d'AZT : A Zéro Terminal. Cela signifie 
qu'une chaîne de caractères se termine forcément par un code ASCII nul (pouvant aussi être 
représenté par '\0'). La fonction strdup copiera chaque caractère, un à un, jusqu'à atteindre 
ce fameux code ASCII nul. Au passage, il sera lui aussi copié.
Paramètre

    source : permet de définir l'adresse de la chaîne de caractères à dupliquer.

Valeur de retour

S'il y a suffisament de mémoire pour produire la nouvelle chaîne, la fonction renvoie l'adresse 
de la chaîne dupliquée. Dans le cas contraire, un pointeur nul vous sera retourné. 

*/