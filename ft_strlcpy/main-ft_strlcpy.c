/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strlcpy.c                  ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/25  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/25  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t ft_strlcpy(char *destination, const char *source, size_t size);

// Fonction pour afficher les résultats des tests
void print_test_result(const char *test_name, const char *dst, size_t length, size_t expected_length, const char *expected_dst)
 {
    printf("\033[1;34mTest %s:\n\033[1;0m", test_name);
    printf("Longueur attendue: \033[1;33m%zu\033[1;0m, Longueur obtenue: \033[1;33m%zu\033[1;0m\n", expected_length, length);
    printf("Destination attendue: '%s', Destination obtenue: '%s'\n", expected_dst, dst);
    printf("%s\n\n", (length == expected_length && strcmp(dst, expected_dst) == 0) ? "\033[1;32mRéussi\033[1;0m" : "\033[1;31mÉchoué\033[1;0m");
}

int main() 
{
    // Cas de test
    char dst1[20];
    char dst2[10];
    char dst3[5];
    char dst4[20];
    
    const char *src = "Hello, world!";
    
    // Test 1 : Taille suffisante du tampon
    size_t length1 = strlcpy(dst1, src, sizeof(dst1));
    print_test_result("1 (taille suffisante)", dst1, length1, 13, "Hello, world!");
    
    // Test 2 : Taille limite exacte
    size_t length2 = strlcpy(dst2, src, sizeof(dst2));
    print_test_result("2 (taille limite exacte)", dst2, length2, 13, "Hello, wo");
    
    // Test 3 : Taille trop petite
    size_t length3 = strlcpy(dst3, src, sizeof(dst3));
    print_test_result("3 (taille trop petite)", dst3, length3, 13, "Hell");
    
    // Test 4 : Taille zéro
    size_t length4 = strlcpy(dst4, src, 0);
    print_test_result("4 (taille zéro)", dst4, length4, 13, "");
    
    return 0;
}



   /*
    TEST INITIAL

    size_t  result_or = 0;
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
