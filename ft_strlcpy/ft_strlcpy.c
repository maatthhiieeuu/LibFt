/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strlcpy.c                       ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stddef.h>

size_t  ft_strlcpy(char *destination, const char *source, size_t size)
{
    size_t  i = 0;
    size_t  source_len = 0;

    if(!source || size == 0)
        return(0);

    while(source[source_len] != '\0')
    {
        source_len += 1;
    }
    
    if(!destination)
        return(source_len);

    while(i < size - 1)
    {
        destination[i] = source[i];
        i += 1;
    }
    destination[size] = '\0';
    return(source_len);
}

/*

    La fonction strlcpy()  copie les chaînes. Elle 
    est conçus pour être des remplacements plus sûrs, plus cohérents et moins sujets aux erreurs 
    que strncpy(3). Contrairement à cette fonction, strlcpy()
    prend la taille totale du tampon (pas seulement la longueur) et garantis la terminaison 
    NUL du résultat (tant que la taille est supérieure à 0). Notez qu'un octet pour le NUL doit 
    être inclus dans size. Notez également que strlcpy() ne fonctionne que sur de vraies 
    chaînes « C ». Cela signifie que pour strlcpy() src doit être terminé par NUL.

La fonction strlcpy () copie jusqu'à la taille - 1 caractères de la chaîne src terminée par NUL 
vers dst , terminant le résultat par NUL.

Valeurs de retour:

La fonction strlcpy () renvoie la longueur totale de la chaîne qu'elle a 
essayé de créer. Pour strlcpy() cela signifie la longueur de src. Bien que cela puisse sembler 
quelque peu déroutant, cela a été fait pour simplifier la détection des troncatures.

*/