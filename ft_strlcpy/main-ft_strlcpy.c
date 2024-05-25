/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strlcpy.c                  ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t ft_strlcpy(char *destination, const char *source, size_t size);

int main()
{
    char src[] = "Hello, world!";
    char dst[10];

    size_t length = ft_strlcpy(dst, src, sizeof(dst));

    if (length >= sizeof(dst)) {
        printf("\033[1;33mLa chaîne source a été tronquée. Longueur réelle de la source : |%zu|\n\033[0m", length);
    } else {
        printf("\033[1;32mLa chaîne a été copiée avec succès : |%s|\n\033[0m", dst);
    }

    return 0;
   /* size_t  result_or = 0;
    size_t  result_ft = 0;
    char    source_or[27];
    char    dest_or[27];
    char    source_ft[27];
    char    dest_ft[27];
    strcpy(source_or, "abcdefghijklmnopqrstuvwxyz");
    strcpy(source_ft, "abcdefghijklmnopqrstuvwxyz");

    // Test 1: Source avant destination
    result_or = strlcpy(dest_or , source_or, 27);
    result_ft = ft_strlcpy(dest_ft, source_ft, 27);

    printf("\033[1;32mor_strlcpy: |%s| result_or = %ld\033[0m\n", dest_or, result_or);
    printf("\033[1;33mft_strlcpy: |%s| result_ft = %ld\033[0m\n\n", dest_ft, result_ft);
*/
}