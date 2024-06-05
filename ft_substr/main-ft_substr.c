/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_substr.c                   ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/05  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/05  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CLR_G "\033[1;32m"
#define CLR_R "\033[1;31m"
#define CLR_Y "\033[1;33m"
#define CLR_r "\033[0m"

// Prototype de la fonction substr
char    *ft_substr(char const *s, unsigned int start, size_t len);

void test_substr(const char *source, size_t start, size_t length, const char *expected) {
    char *result = ft_substr(source, start, length);
    if (result == NULL) {
        if (expected == NULL) {
            printf(CLR_G"Test Passed"CLR_r": substr(\"%s\", %zu, %zu) -> NULL\n\n", source, start, length);
        } else {
            printf(CLR_R"Test Failed"CLR_r": substr(\"%s\", %zu, %zu) -> NULL, expected \"%s\"\n\n", source, start, length, expected);
        }
    } else {
        if (strcmp(result, expected) == 0) {
            printf(CLR_G"Test Passed"CLR_r": substr(\"%s\", %zu, %zu) -> \"%s\"\n\n", source, start, length, result);
        } else {
            printf(CLR_R"Test Failed"CLR_r": substr(\"%s\", %zu, %zu) -> \"%s\", expected \"%s\"\n\n", source, start, length, result, expected);
        }
        free(result); // N'oubliez pas de libérer la mémoire allouée
    }
}

int main() {
    printf(CLR_Y"Running 1er Tests for ft_substr function:\n\n"CLR_r);

    // Cas de base
    printf(CLR_Y"Test 1:\n"CLR_r);
    test_substr("Hello, BSD world!", 7, 3, "BSD");

    // Indice de départ hors limites
    printf(CLR_Y"Test 2:\n"CLR_r);
    test_substr("Hello, BSD world!", 50, 5, "");

    // Longueur spécifiée trop longue
    printf(CLR_Y"Test 3:\n"CLR_r);
    test_substr("Hello, BSD world!", 7, 50, "BSD world!");

    // Longueur de zéro
    printf(CLR_Y"Test 4:\n"CLR_r);
    test_substr("Hello, BSD world!", 7, 0, "");

    // Chaîne vide
    printf(CLR_Y"Test 5:\n"CLR_r);
    test_substr("", 0, 5, "");

    // Chaîne NULL
    printf(CLR_Y"Test 6:\n"CLR_r);
    test_substr(NULL, 0, 5, NULL);

    // Début au milieu de la chaîne
    printf(CLR_Y"Test 7:\n"CLR_r);
    test_substr("Hello, BSD world!", 0, 5, "Hello");

    // Début au dernier caractère
    printf(CLR_Y"Test 8:\n"CLR_r);
    test_substr("Hello, BSD world!", 16, 1, "!");

    // Test avec chaîne contenant des caractères spéciaux
    printf(CLR_Y"Test 9:\n"CLR_r);
    test_substr("Hello, $pecial *chars*!", 7, 15, "$pecial *chars*");

    // Cas où start + length dépasse la longueur de la chaîne source
    printf(CLR_Y"Test 10:\n"CLR_r);
    test_substr("Boundary test", 5, 20, "ary test");

    printf(CLR_Y"Running 2nd Tests for substr function:\n\n"CLR_r);

    // Cas de base
    printf(CLR_Y"Test 1:\n"CLR_r);
    test_substr("Hello, BSD world!", 7, 3, "BSD");

    // Indice de départ hors limites
    printf(CLR_Y"Test 2:\n"CLR_r);
    test_substr("Hello, BSD world!", 50, 5, "");

    // Longueur spécifiée trop longue
    printf(CLR_Y"Test 3:\n"CLR_r);
    test_substr("Hello, BSD world!", 7, 50, "BSD world!");

    // Longueur de zéro
    printf(CLR_Y"Test 4:\n"CLR_r);
    test_substr("Hello, BSD world!", 7, 0, "");

    // Chaîne vide
    printf(CLR_Y"Test 5:\n"CLR_r);
    test_substr("", 0, 5, "");

    // Chaîne NULL
    printf(CLR_Y"Test 6:\n"CLR_r);
    test_substr(NULL, 0, 5, NULL);

    // Début au milieu de la chaîne
    printf(CLR_Y"Test 7:\n"CLR_r);
    test_substr("Hello, BSD world!", 0, 5, "Hello");

    // Début au dernier caractère
    printf(CLR_Y"Test 8:\n"CLR_r);
    test_substr("Hello, BSD world!", 16, 1, "!");

    // Test avec chaîne contenant des caractères spéciaux
    printf(CLR_Y"Test 9:\n"CLR_r);
    test_substr("Hello, $pecial *chars*!", 7, 15, "$pecial *chars*");

    printf(CLR_Y"All tests completed.\n"CLR_r);

    return 0;
}
