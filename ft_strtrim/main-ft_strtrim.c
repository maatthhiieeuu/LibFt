/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strtrim.c                  ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/09  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/09  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BOLD    "\033[1m"
#define clr_blue "\033[1;35m"
#define clr_orange "\033[1;33m"
#define clr_green "\033[1;32m"
#define clr_red "\033[1;31m"
#define clr_grey "\033[1;30m"
#define clr_reset "\033[1;0m"

size_t	ft_strlen(const char *string);
char	*ft_strtrim(char const *s1, char const *set);

// Fonction pour vérifier si un caractère est dans l'ensemble
int is_in_set(char c, const char *set) {
    while (*set) {
        if (c == *set) return 1;
        set++;
    }
    return 0;
}

void test_strtrim(const char *s1, const char *set, const char *expected) 
{
    char *result = ft_strtrim(s1, set);
    bool success = (result && expected && strcmp(result, expected) == 0) || (!result && !expected);

    if (success) {
        printf(GREEN "SUCCESS" RESET ": ");
    } else {
        printf(RED "FAIL" RESET ": ");
    }

    printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s1, set, result ? result : "NULL");
    printf("Expected: \"%s\"\n\n", expected ? expected : "NULL");

    free(result);
}

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i = 0;
	if(!first || !second)
		printf("\033[1;31mError fonction strncmp\033[1;0m");
	while(first[i] != 0 && second[i] != 0 && i < length)
	{
		if(first[i] != second[i])
			return(first[i] - second[i]);
		i += 1;
	}
	return(first[i] - second[i]);
}




void	test_ft_strtrim(char const *s1, char const *set, char const *expected, size_t *i)
{
	char	*result_test = NULL;

	result_test = ft_strtrim(s1, set);
	if(!result_test && !s1)
	{
		printf(clr_grey"result_test =          |(null)|.\n"clr_reset);
		printf(clr_green"Success\n"clr_reset);	
	}
	else if(!result_test && s1)
	{
		printf(clr_grey"result_test =          |(null)|.\n"clr_reset);
		printf(clr_red"Failed\n"clr_reset);
	}
	else if(ft_strncmp(result_test, expected, ft_strlen(s1) + 1) == 0)
	{
		printf(clr_grey"result_test =       |%s|\nexpected =          |%s|\n"clr_reset, result_test, expected);
		printf(clr_green"Success\n"clr_reset);
	}else 
	{
		printf(clr_grey"result_test =       |%s|\nexpected =          |%s|\n"clr_reset, result_test, expected);
		printf(clr_red"Failed\n"clr_reset);
	}
	*i += 1;
	free(result_test);
}

int main() 
{
	size_t	i = 1;
	
	//Test 1: Cas simple
	char const	*str = "GGFrancis est intelligent.GG";
	char		*set = "G";
	printf(clr_orange"\ntest %ld:\nstr_originale =     |%s|\nset = G\n"clr_reset, i, str);
	test_ft_strtrim(str, set, "Francis est intelligent.", &i);
	
	//Test 2: Cas avec une longue chaîne
	str = "****La petite souris dansait face à l'épreuve du parcourt de la tomme de savoie !******";
	set = "*";
	printf(clr_orange"\ntest %ld:\nstr_originale =     |%s|\n"clr_reset, i, str);
	test_ft_strtrim(str, set, "La petite souris dansait face à l'épreuve du parcourt de la tomme de savoie !", &i);
	
	//Test 3: Cas avec tabulation
	str = "		Le facteur de Thann est dynamique.		";
	set = "	";
	printf(clr_orange"\ntest %ld:\nstr_originale =     |%s|\n"clr_reset, i, str);
	test_ft_strtrim(str, set, "Le facteur de Thann est dynamique.", &i);

	//Test 4: Cas sans set
	str = "		La belette trouve toujours le moyen de s'enfuir.		";
	set = "";
	printf(clr_orange"\ntest %ld:\nstr_originale =     |%s|\n"clr_reset, i, str);
	test_ft_strtrim(str, set, "		La belette trouve toujours le moyen de s'enfuir.		", &i);

	//Test 5: Cas d'une chaîne vide
	str = "";
	set = " ";
	printf(clr_orange"\ntest %ld:\nstr_originale =     |%s|\n"clr_reset, i, str);
	test_ft_strtrim(str, set, "", &i);

	//Test 6: Cas d'un pointeur NULL
	str = NULL;
	set = "";
	printf(clr_orange"\ntest %ld:\nstr_originale =        |%s|\n"clr_reset, i, str);
	test_ft_strtrim(NULL, set, NULL, &i);
	
	//Test 7: Cas avec espace
	str = "     Louise aimait cette animale inconditionnellement malgres ses crocs aiguisés et son dard venimeux.     ";
	set = " ";
	printf(clr_orange"\ntest %ld:\nstr_originale =     |%s|\n"clr_reset, i, str);
	test_ft_strtrim(str, set, "Louise aimait cette animale inconditionnellement malgres ses crocs aiguisés et son dard venimeux.", &i);

	//Test 8: Cas de nombreux set 
	str = "La pomme est ronde.";
	set = " aLe.";
	printf(clr_orange"\ntest %ld:\nstr_originale =     |%s|\n"clr_reset, i, str);
	test_ft_strtrim(str, set, "pomme est rond", &i);

	//Test 9: Cas de très nombreux set 
	str = "La pomme est rond.e";
	set = " 0123456789aLe";
	printf(clr_orange"\ntest %ld:\nstr_originale =     |%s|\n"clr_reset, i, str);
	test_ft_strtrim(str, set, "pomme est rond.", &i);

	printf(clr_blue"\nFin des tests !!\n\n"clr_reset);

    printf(BOLD "Test cases for ft_strtrim:\n" RESET);

    test_strtrim("GJUFrancis est intelligentGJU", "GJU", "Francis est intelligent");
    test_strtrim("GJUFrancis est intelligentJU", "GJU", "Francis est intelligent");
    test_strtrim("Francis est intelligent", "GJU", "Francis est intelligent");
    test_strtrim("GGGJUFrancis est intelligentGJU", "GJU", "Francis est intelligent");
    test_strtrim("GJUFrancis est intelligent", "GJU", "Francis est intelligent");
    test_strtrim("Francis est intelligentGJU", "GJU", "Francis est intelligent");
    test_strtrim("GGGJU", "GJU", "");
    test_strtrim("", "GJU", "");
    test_strtrim("Francis", "", "Francis");
    test_strtrim(NULL, "GJU", NULL);

    return 0;
}
