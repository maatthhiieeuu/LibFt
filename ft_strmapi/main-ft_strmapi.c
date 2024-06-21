/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strmapi.c                  ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/21  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/21  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype de ft_strmapi
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// Fonction de transformation : convertit un caractère en majuscule
char to_uppercase(unsigned int i, char c) 
{
	(void)i;
    if (c >= 'a' && c <= 'z') {
        return c - 32; // Conversion en majuscule
    }
    return c; // Retourne le caractère inchangé s'il n'est pas minuscule
}

// Fonction de transformation : convertit un caractère en minuscule
char to_lowercase(unsigned int i, char c) 
{
	(void)i;
    if (c >= 'A' && c <= 'Z') {
        return c + 32; // Conversion en minuscule
    }
    return c; // Retourne le caractère inchangé s'il n'est pas majuscule
}

// Fonction de transformation : inverse les caractères
char reverse_char(unsigned int i, char c) 
{
	(void)i;
    if (c >= 'a' && c <= 'z') {
        return 'z' - (c - 'a'); // Inverse les minuscules
    } else if (c >= 'A' && c <= 'Z') {
        return 'Z' - (c - 'A'); // Inverse les majuscules
    }
    return c; // Retourne le caractère inchangé s'il n'est pas une lettre
}

// Fonction pour afficher une chaîne en rouge
void print_red(const char *str) 
{
    printf("\033[1;31m%s\033[0m", str);
}

// Fonction pour afficher une chaîne en vert
void print_green(const char *str) 
{
    printf("\033[1;32m%s\033[0m", str);
}

// Fonction pour afficher une chaîne en bleu
void print_blue(const char *str) 
{
    printf("\033[1;34m\n%s\033[0m", str);
}

int main() {
    char *str = "Hello, World!";
    char *transformed1 = ft_strmapi(str, to_uppercase);
    char *transformed2 = ft_strmapi(str, to_lowercase);
    char *transformed3 = ft_strmapi(str, reverse_char);

    if (transformed1 && transformed2 && transformed3) {
        printf("Original: %s\n", str);
        printf("Transformed to ");
        print_red("uppercase");
        printf(": %s\n", transformed1);
        printf("Transformed to ");
        print_green("lowercase");
        printf(": %s\n", transformed2);
        printf("Reversed characters: ");
        print_blue(transformed3);

        free(transformed1);
        free(transformed2);
        free(transformed3);
    } else {
        printf("Erreur: allocation mémoire a échoué.\n");
    }

    return 0;
}
