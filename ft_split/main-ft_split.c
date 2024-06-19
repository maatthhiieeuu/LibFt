/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_split.c                    ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/19  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/19  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c);

// Fonction pour libérer la mémoire allouée par ft_split
void free_split(char **split) {
    if (!split) return;
    for (size_t i = 0; split[i] != NULL; i++) {
        free(split[i]);
    }
    free(split);
}

// Fonction pour comparer les résultats et afficher le succès ou l'échec
void compare_results(char **result, char **expected, const char *test_name) {
    int success = 1;
    size_t i = 0;

    while (expected[i] != NULL) {
        if (result[i] == NULL || strcmp(result[i], expected[i]) != 0) {
            success = 0;
            break;
        }
        i++;
    }

    if (result[i] != NULL) {
        success = 0;
    }

    if (success) {
        printf("\033[1;32mSUCCESS:\033[0m %s\n", test_name);
        printf("  \033[1;30mExpected:\033[0m\n");
        for (i = 0; expected[i] != NULL; i++) {
            printf("    \033[1;30m'%s'\033[0m\n", expected[i]);
        }
        printf("  \033[1;30mGot:\033[0m\n");
        for (i = 0; result[i] != NULL; i++) {
            printf("    \033[1;30m'%s'\033[0m\n", result[i]);
        }
    } else {
        printf("\033[1;31mFAILED:\033[0m %s\n", test_name);
        printf("  \033[1;30mExpected:\033[0m\n");
        for (i = 0; expected[i] != NULL; i++) {
            printf("    \033[1;30m'%s'\033[0m\n", expected[i]);
        }
        printf("  \033[1;30mGot:\033[0m\n");
        for (i = 0; result[i] != NULL; i++) {
            printf("    \033[1;30m'%s'\033[0m\n", result[i]);
        }
    }
}

// Fonction pour exécuter un test
void run_test(const char *str, char delim, char **expected, const char *test_name) {
    char **result = ft_split(str, delim);
    compare_results(result, expected, test_name);
    free_split(result);
}

int main() {
    // Cas de test 1 : chaîne avec un seul délimiteur
    char *expected1[] = {"j'aime le ", "ylophone", NULL};
    run_test("j'aime le xylophone", 'x', expected1, "Test 1: chaîne avec un seul délimiteur");

    // Cas de test 2 : chaîne sans délimiteur
    char *expected2[] = {"il n'y a pas de délimiteur ici", NULL};
    run_test("il n'y a pas de délimiteur ici", 'z', expected2, "Test 2: chaîne sans délimiteur");

    // Cas de test 3 : chaîne avec plusieurs délimiteurs
    char *expected3[] = {"abc", "def", "ghi", NULL};
    run_test("abc,def,ghi", ',', expected3, "Test 3: chaîne avec plusieurs délimiteurs");

    // Cas de test 4 : délimiteur au début et à la fin de la chaîne
    char *expected4[] = {"bonjour", "monde", NULL};
    run_test(",bonjour,monde,", ',', expected4, "Test 4: délimiteur au début et à la fin de la chaîne");

    // Cas de test 5 : chaîne vide
    char *expected5[] = {NULL};
    run_test("", 'x', expected5, "Test 5: chaîne vide");

    // Cas de test 6 : chaîne avec des délimiteurs consécutifs
    char *expected6[] = {"a", "b", "c", "d", NULL};
    run_test("a;;b;c;;d", ';', expected6, "Test 6: chaîne avec des délimiteurs consécutifs");

    //Cas de test 7 : chaîne avec beaucoup de délimiteurs
    char *expected7[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", NULL};
    run_test("1e2e3e4e5e6e7e8e9eAeBeCeDeEeFeGeHeIeJeKeLeMeNeOePeQeReSeTeUeVeWeXeYeZ", 'e', expected7, "Test 7: chaîne avec beaucoup de délimiteurs");

		
    return 0;
}

