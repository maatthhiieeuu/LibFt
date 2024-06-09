/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strjoin.c                  ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/06  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/06  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CLR_Y "\033[1;33m"
#define CLR_r "\033[0m"

char	*ft_strjoin(char const *s1, char const *s2);

void test_strjoin(const char *s1, const char *s2, size_t i) 
{	
    printf(CLR_Y"Test %ld for ft_strjoin(\"%s\", \"%s\"):\n"CLR_r, i,  s1, s2);
  
    char *result = ft_strjoin(s1, s2);
    if (result == NULL) 
        printf("Result: NULL\n\n");
    else 
    {
        printf("Result: \"%s\"\n\n", result);
        free(result); // Libérer la mémoire allouée
    }
    
}

int main() {
	size_t	i = 1;

    test_strjoin("Hello, ", "world!", i);
    i++;
    test_strjoin("", "", i);
    i++;
    test_strjoin("", "world!", i);
    i++;
    test_strjoin("Hello, ", "", i);
    i++;
    test_strjoin(NULL, NULL, i);
    i++;
    test_strjoin("Hello, ", NULL, i);
    i++;
    test_strjoin(NULL, "world!", i);
    i++;

    return 0;
}
