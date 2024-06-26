/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_striteri.c                 ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/22  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/22  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */
#include <stdio.h>

// Déclaration des fonctions
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void to_uppercase(unsigned int index, char *c);

// Exemple de fonction à appliquer : convertit chaque caractère en majuscule
void to_uppercase(unsigned int index, char *c) {
	(void)index;
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;  // Convertit en majuscule
    }
}

int main() {
    // Chaîne de caractères à modifier
    char str[] = "bonjour, monde!";
    
    // Affiche la chaîne avant modification
    printf("Avant modification : %s\n", str);
    
    // Appelle ft_striteri avec la fonction to_uppercase
    ft_striteri(str, to_uppercase);
    
    // Affiche la chaîne après modification
    printf("Après modification : %s\n", str);
    
    return 0;
}