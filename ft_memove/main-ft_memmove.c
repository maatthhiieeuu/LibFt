/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_memmove.c                       ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/17  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/17  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>

void * memmove( void * destination, const void * source, size_t size );
/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_memmove.c                  ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/24  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/24  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>

void	*ft_memmove(void *destination, const void *source, size_t size);
void test_memmove_overlap();

int main()
{
    char data_or[100];
    char data_ft[100];
    strcpy(data_or, "abcdefghijklmnopqrstuvwxyz");
    strcpy(data_ft, "abcdefghijklmnopqrstuvwxyz");

    // Test 1: Source avant destination
    memmove(data_or + 5, data_or, 20);
    ft_memmove(data_ft + 5, data_ft, 20);
    printf("\033[1;32mmemmove_or 2ème if: (source < destination): %s\033[0m\n", data_or);
    printf("\033[1;33mft_memmove 2ème if: (source < destination): %s\033[0m\n\n", data_ft);
    // Reset data
    strcpy(data_or, "abcdefghijklmnopqrstuvwxyz");
    strcpy(data_ft, "abcdefghijklmnopqrstuvwxyz");
    // Test 2: Destination avant source
    memmove(data_or, data_or + 5, 20);
    ft_memmove(data_ft, data_ft + 5, 20);
    printf("\033[1;32mmemmove_or 1er if (destination < source):   %s\033[0m\n", data_or);
    printf("\033[1;33mft_memmove 1er if (destination < source):   %s\033[0m\n\n", data_ft);
}