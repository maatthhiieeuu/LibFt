/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strdup.c                   ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/05  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/05  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CLR_g "\033[1;30m"
#define CLR_R "\033[1;31m"
#define CLR_G "\033[1;32m"
#define CLR_O "\033[1;33m"
#define CLR_r "\033[1;0m"

char *ft_strdup(const char *source);
size_t ft_strlen(const char *string);

int ft_strncmp(const char *first, const char *second, size_t length)
{
    size_t i = 0;
    if (!first || !second)
    {
        printf("\033[1;31mError fonction strncmp\033[1;0m\n");
        return -1;
    }
    while (first[i] != 0 && second[i] != 0 && i < length)
    {
        if (first[i] != second[i])
            return (first[i] - second[i]);
        i += 1;
    }
    return (first[i] - second[i]);
}

void run_test(const char *test_string)
{
    char *result_or = NULL;
    char *result_ft = NULL;
    size_t len_or = 0;
    size_t len_ft = 0;
    int cmp = 999;

    len_or = strlen(test_string);
    len_ft = ft_strlen(test_string);
    result_or = strdup(test_string);
    result_ft = ft_strdup(test_string);
    cmp = ft_strncmp(result_or, result_ft, len_or + 1);

    if (cmp == 0)
    {
        printf(CLR_G"SUCCESS\n"CLR_r);
        printf(CLR_g"string:|%s|\nor:|%s|\nft:|%s|\nnb octets or:|%zu|\nnb octets ft:|%zu|\n"CLR_r,
               test_string, result_or, result_ft, len_or, len_ft);
    }
    else
    {
        printf(CLR_R"FAILED\n"CLR_r);
        printf(CLR_g"string:|%s|\nor:|%s|\nft:|%s|\nnb octets or:|%zu|\nnb octets ft:|%zu|\n"CLR_r,
               test_string, result_or, result_ft, len_or, len_ft);
    }

    free(result_or);
    free(result_ft);
}

int main()
{
    printf(CLR_O"\nTest 1:\n"CLR_r);
    run_test("L'oiseau est gris.");

    printf(CLR_O"\nTest 2:\n"CLR_r);
    run_test("");

    printf(CLR_O"\nTest 3:\n"CLR_r);
    run_test("Ceci est une chaîne de test avec des caractères spéciaux !@#$%^&*()");

    printf(CLR_O"\nTest 4:\n"CLR_r);
    run_test("Une chaîne très très longue pour tester les limites de la fonction strdup, \
             voyons voir comment cela se comporte lorsque nous avons beaucoup de données.");

    printf(CLR_O"\nTest 5 (NULL):\n"CLR_r);
    char *result_ft = ft_strdup(NULL);
    if (result_ft == NULL)
    {
        printf(CLR_G"SUCCESS\n"CLR_r);
        printf(CLR_g"ft_strdup(NULL) returned NULL as expected.\n"CLR_r);
    }
    else
    {
        printf(CLR_R"FAILED\n"CLR_r);
        printf(CLR_g"ft_strdup(NULL) did not return NULL.\n"CLR_r);
        free(result_ft);
    }

    return 0;
}
