/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strchr.c                   ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/30  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/30  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *string, int searched_char);

int	main()
{
	const char	*str1 = "Hello, world!";
	const char	*str2 = "lambada!";
	const char	*str3 = "katarino";
	const char	*str4 = "";
    char 		tst1 = 'r';
    char		tst2 = 'l';
    char		tst3 = 'o';

    printf("\n\n\033[1;33mDébut du test 1 : Recherche char au milieu de la chaine.\033[1;0m\n");
    char 		*result1_ft = ft_strchr(str1, tst1);
	char 		*result1_or = strchr(str1, tst1);
	if (result1_ft == result1_or) 
	{
        printf("Les pointeurs sont identiques:\nft = \033[1;32m%p\033[1;0m\nor = \033[1;32m%p\033[1;0m\n", result1_ft, result1_or);
    } 
    else {
        printf("Les pointeurs ne sont pas identiques:\nft = \033[1;31m%p\033[1;0m\nor = \033[1;31m%p\033[1;0m\n", result1_ft, result1_or);
    }


    printf("\n\n\033[1;33mDébut du test 2 : Recherche char au début de la chaine.\033[1;0m\n");
	char 		*result2_ft = ft_strchr(str2, tst2);
	char 		*result2_or = strchr(str2, tst2);
	if (result2_ft == result2_or) 
	{
        printf("Les pointeurs sont identiques:\nft = \033[1;32m%p\033[1;0m\nor = \033[1;32m%p\033[1;0m\n", result2_ft, result2_or);
    } 
    else {
        printf("Les pointeurs ne sont pas identiques:\nft = \033[1;31m%p\033[1;0m\nor = \033[1;31m%p\033[1;0m\n", result2_ft, result2_or);
    }

	printf("\n\n\033[1;33mDébut du test 3 : Recherche char à la fin de la chaine.\033[1;0m\n");
	char 		*result3_ft = ft_strchr(str3, tst3);
	char 		*result3_or = strchr(str3, tst3);
	if (result3_ft == result3_or) 
	{
        printf("Les pointeurs sont identiques:\nft = \033[1;32m%p\033[1;0m\nor = \033[1;32m%p\033[1;0m\n", result3_ft, result3_or);
    } 
    else {
        printf("Les pointeurs ne sont pas identiques:\nft = \033[1;31m%p\033[1;0m\nor = \033[1;31m%p\033[1;0m\n", result3_ft, result3_or);
    }

	printf("\n\n\033[1;33mDébut du test 4 : Recherche char dans une chaine vide.\033[1;0m\n");
	char 		*result4_ft = ft_strchr(str4, tst1);
	char 		*result4_or = strchr(str4, tst1);
	if (result4_ft == result4_or) 
	{
        printf("Les pointeurs sont identiques:\nft = \033[1;32m%p\033[1;0m\nor = \033[1;32m%p\033[1;0m\n", result4_ft, result4_or);
    } 
    else {
        printf("Les pointeurs ne sont pas identiques:\nft = \033[1;31m%p\033[1;0m\nor = \033[1;31m%p\033[1;0m\n", result4_ft, result4_or);
    }


}


/*\033[1;32m 
if (result) {
        printf("Le caractère '%c' a été trouvé : %s\n", o, result);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé.\n", o);
    }

    char		z = 'z';
    result = ft_strchr(str, z);
    if (result) {
        printf("Le caractère '%c' a été trouvé : %s\n", z, result);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé.\n", z);
    }
    */