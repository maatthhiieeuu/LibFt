/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strlcat.c                  ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/25  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/25  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <bsd/string.h>

// Déclaration de votre fonction ft_strlcat
size_t ft_strlcat(char *dst, const char *src, size_t size);

int main()
{
    char buffer_or[100];
    char buffer_ft[100];
    const char *source = "la casa del papel est moin bien que le problème à 3 corps ";
    size_t result_or;
    size_t result_ft;

    // Test 1 : Concaténation simple
    strlcpy(buffer_or, "moi je dis !", sizeof(buffer_or));
    strlcpy(buffer_ft, "moi je dis !", sizeof(buffer_ft));
    result_or = strlcat(buffer_or, source, sizeof(buffer_or));
    result_ft = ft_strlcat(buffer_ft, source, sizeof(buffer_ft));
    printf("\033[1;30m\n\n\nTest 1 : Concaténation simple\033[1;0m\n");
    printf("\033[1;33mor_strlcat\033[1;0m - Result: \033[1;33m%zu\033[1;0m, Buffer: |\033[1;33m%s\033[1;0m|\n", result_or, buffer_or);
    printf("\033[1;34mft_strlcat\033[1;0m - Result: \033[1;34m%zu\033[1;0m, Buffer: |\033[1;34m%s\033[1;0m|\n\n", result_ft, buffer_ft);

    // Test 2 : Taille du tampon trop petite
    strlcpy(buffer_or, "moi je dis !", sizeof(buffer_or));
    strlcpy(buffer_ft, "moi je dis !", sizeof(buffer_ft)); 
    result_or = strlcat(buffer_or, source, 10);
    result_ft = ft_strlcat(buffer_ft, source, 10);
    printf("\033[1;30mTest 2 : Taille du tampon trop petite\033[1;0m\n");
    printf("\033[1;33mor_strlcat\033[1;0m - Result: \033[1;33m%zu\033[1;0m, Buffer: |\033[1;33m%s\033[1;0m|\n", result_or, buffer_or);
    printf("\033[1;34mft_strlcat\033[1;0m - Result: \033[1;34m%zu\033[1;0m, Buffer: |\033[1;34m%s\033[1;0m|\n\n", result_ft, buffer_ft);

    // Test 3 : Tampon vide
    strlcpy(buffer_or, "", sizeof(buffer_or));
    strlcpy(buffer_ft, "", sizeof(buffer_ft)); 
    result_or = strlcat(buffer_or, source, sizeof(buffer_or));
    result_ft = ft_strlcat(buffer_ft, source, sizeof(buffer_ft));
    printf("\033[1;30mTest 3 : Tampon vide\033[1;0m\n");
    printf("\033[1;33mor_strlcat\033[1;0m - Result: \033[1;33m%zu\033[1;0m, Buffer: |\033[1;33m%s\033[1;0m|\n", result_or, buffer_or);
    printf("\033[1;34mft_strlcat\033[1;0m - Result: \033[1;34m%zu\033[1;0m, Buffer: |\033[1;34m%s\033[1;0m|\n\n", result_ft, buffer_ft);

    // Test 4 : Source vide
    strlcpy(buffer_or, "moi je dis !", sizeof(buffer_or));
    strlcpy(buffer_ft, "moi je dis !", sizeof(buffer_ft));
    result_or = strlcat(buffer_or, "", sizeof(buffer_or));
    result_ft = ft_strlcat(buffer_ft, "", sizeof(buffer_ft));
    printf("\033[1;30mTest 4 : Source vide\033[1;0m\n");
    printf("\033[1;33mor_strlcat\033[1;0m - Result: \033[1;33m%zu\033[1;0m, Buffer: |\033[1;33m%s\033[1;0m|\n", result_or, buffer_or);
    printf("\033[1;34mft_strlcat\033[1;0m - Result: \033[1;34m%zu\033[1;0m, Buffer: |\033[1;34m%s\033[1;0m|\n\n", result_ft, buffer_ft);

    // Test 5 : Tampon de taille 0
    strlcpy(buffer_or, "moi je dis !", sizeof(buffer_or));
    strlcpy(buffer_ft, "moi je dis !", sizeof(buffer_ft));
    result_or = strlcat(buffer_or, source, 0);
    result_ft = ft_strlcat(buffer_ft, source, 0);
    printf("\033[1;30mTest 5 : Tampon de taille 0\033[1;0m\n");
    printf("\033[1;33mor_strlcat\033[1;0m - Result: \033[1;33m%zu\033[1;0m, Buffer: |\033[1;33m%s\033[1;0m|\n", result_or, buffer_or);
    printf("\033[1;34mft_strlcat\033[1;0m - Result: \033[1;34m%zu\033[1;0m, Buffer: |\033[1;34m%s\033[1;0m|\n\n\n", result_ft, buffer_ft);
  

    return 0;
}
