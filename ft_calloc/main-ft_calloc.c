/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_calloc.c                   ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/03  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/03  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// Déclaration de ft_calloc
void	*ft_calloc(size_t count, size_t size);

#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_ORANGE "\x1b[33m"
#define COLOR_RESET "\x1b[0m"

void test_ft_calloc(size_t count, size_t size) {
    void *ptr = ft_calloc(count, size);
    if (ptr == NULL) {
        printf(COLOR_RED "ft_calloc failed to allocate memory for count = %zu, size = %zu\n" COLOR_RESET, count, size);
        return;
    }

    // Vérifier que la mémoire est bien initialisée à zéro
    int zero_initialized = 1;
    for (size_t i = 0; i < count * size; i++) {
        if (((unsigned char*)ptr)[i] != 0) {
            zero_initialized = 0;
            break;
        }
    }

    if (zero_initialized) {
        printf(COLOR_GREEN "Test passed for count = %zu, size = %zu: Memory is zero-initialized.\n" COLOR_RESET, count, size);
    } else {
        printf(COLOR_RED "Test failed for count = %zu, size = %zu: Memory is not zero-initialized.\n" COLOR_RESET, count, size);
    }

    free(ptr);
}

void test_calloc(size_t count, size_t size) {
    void *ptr = calloc(count, size);
    if (ptr == NULL) {
        printf(COLOR_RED "calloc_or failed to allocate memory for count = %zu, size = %zu\n" COLOR_RESET, count, size);
        return;
    }

    // Vérifier que la mémoire est bien initialisée à zéro
    int zero_initialized = 1;
    for (size_t i = 0; i < count * size; i++) {
        if (((unsigned char*)ptr)[i] != 0) {
            zero_initialized = 0;
            break;
        }
    }

    if (zero_initialized) {
        printf(COLOR_GREEN "Test passed for count = %zu, size = %zu: Memory is zero-initialized.\n" COLOR_RESET, count, size);
    } else {
        printf(COLOR_RED "Test failed for count = %zu, size = %zu: Memory is not zero-initialized.\n" COLOR_RESET, count, size);
    }

    free(ptr);
}

int main() {
    // Tests de base
    printf(COLOR_ORANGE"\n\nTest 1:\n"COLOR_RESET);
    test_ft_calloc(10, sizeof(int));
    test_calloc(10, sizeof(int));

    printf(COLOR_ORANGE"\n\nTest 2:\n"COLOR_RESET);
    test_ft_calloc(0, sizeof(int));
    test_calloc(0, sizeof(int));

    printf(COLOR_ORANGE"\n\nTest 3:\n"COLOR_RESET);
    test_ft_calloc(10, 0);
    test_calloc(10, 0);
    printf(COLOR_ORANGE"\n\nTest 4:\n"COLOR_RESET);
    test_ft_calloc(0, 0);
    test_calloc(0, 0);

    // Test avec de grandes valeurs
    printf(COLOR_ORANGE"\n\nTest 5:\n"COLOR_RESET);
    test_ft_calloc(1000000, sizeof(int));
    test_calloc(1000000, sizeof(int));

    // Test avec des types différents
    printf(COLOR_ORANGE"\n\nTest 6:\n"COLOR_RESET);
    test_ft_calloc(20, sizeof(char));
    test_calloc(20, sizeof(char));

    printf(COLOR_ORANGE"\n\nTest 7:\n"COLOR_RESET);
    test_ft_calloc(15, sizeof(double));
    test_calloc(15, sizeof(double));

    // Test avec des valeurs qui devraient causer des débordements (sous réserve que malloc détecte cela)
    printf(COLOR_ORANGE"\n\nTest 8:\n"COLOR_RESET);
    test_ft_calloc(SIZE_MAX, 2);
    test_calloc(SIZE_MAX, 2);

    printf(COLOR_ORANGE"\n\nTest 9:\n"COLOR_RESET);
    test_ft_calloc(2, SIZE_MAX);
    test_calloc(2, SIZE_MAX);
    printf(COLOR_ORANGE"\n\n---+++****-----FIN DU TEST---+++****-----\n"COLOR_RESET);

    return 0;
}