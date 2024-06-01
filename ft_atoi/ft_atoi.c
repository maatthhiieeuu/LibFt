/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_atoi.c                          ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

int	atoi(const char *string)
{
	
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