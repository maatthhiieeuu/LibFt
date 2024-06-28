/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_toupper.c                       ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/27  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"

int	ft_toupper(int character)
{
	if(character >= 'a' && character <= 'z')
		return(character - 32);

	return(character);
}


/*

Entête à inclure

#include <ctype.h>  // <cctype> en C++

Fonction toupper

int toupper( int character );

Cette fonction permet de convertir une lettre minuscule à une lettre majuscule. Rappel : les 
fonctions de cette librairie ne traitent que les caractères purs ASCII. Les lettres accentuées 
ne seront donc pas considérées comme des caractères alpha-numériques.
Paramètre

    character : le caractère à convertir. Il est sur-typé par int car la fonction peut aussi 
    accepter la valeur -1 (EOF - End Of File) correspondant à la fin d'un flux.

Valeur de retour

Cette fonction retourne le caractère équivalent transformé en majuscule, si le caractère passé 
en paramètre était une minuscule. Si le caractère passé n'était pas une minuscule, alors la 
fonction retourne le caractère inchangé. Le résultat doit bien entendu être considéré en tant que 
unsigned char, néanmoins la fonction peut -1 si EOF a été fournit en paramètre. 

*/