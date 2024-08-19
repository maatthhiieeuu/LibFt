#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#define GREY "\033[1;30m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define ORANGE "\033[1;33m"
#define BLUE "\033[1;34m"
#define PURPLE "\033[1;35m"
#define BLINK "\033[1;5m"
#define RESET "\033[0;0m"
//// Callback function for ft_striteri using ft_toupper
//void striteri_toupper(unsigned int i, char *c) {
//    (void)i; // To avoid unused parameter warning
//    *c = ft_toupper(*c);
//}
//
//// Callback function for ft_striteri using ft_tolower
//void striteri_tolower(unsigned int i, char *c) {
//    (void)i; // To avoid unused parameter warning
//    *c = ft_tolower(*c);
//}
//
//// Callback function for ft_strmapi using ft_toupper
//char strmapi_toupper(unsigned int i, char c) {
//    (void)i; // To avoid unused parameter warning
//    return ft_toupper(c);
//}
//
//// Callback function for ft_strmapi using ft_tolower
//char strmapi_tolower(unsigned int i, char c) {
//    (void)i; // To avoid unused parameter warning
//    return ft_tolower(c);
//}

int main() 
{

	int				decimal_digit	= -99999;
	long long int	result			= 0;

	printf(BLUE"\n\nDecimal_digit = "ORANGE"%d"RESET, decimal_digit);
	printf(BLUE"\nResult        = "ORANGE"%lld"RESET, result);

	result = (long long int)decimal_digit;

	printf(PURPLE"\n\nresult = (long long int)decimal_digit"RESET);
	printf(BLUE"\n\nDecimal_digit = "ORANGE"%d"RESET, decimal_digit);
	printf(BLUE"\nResult        = "ORANGE"%lld"RESET, result);


printf("\n\n\n");

//    char dest4[50];
//    char dest6[50];
//
//    
//    // ft_atoi tests
//    printf("ft_atoi tests:\n");
//    printf("min: %d\n", ft_atoi("-2147483648")); // INT_MIN
//    printf("mid: %d\n", ft_atoi("0"));
//    printf("max: %d\n", ft_atoi("2147483647"));  // INT_MAX
//    printf("\n");
//
//    // ft_isalpha tests
//    printf("ft_isalpha tests:\n");
//    printf("min: %d\n", ft_isalpha('a'));  // 1
//    printf("mid: %d\n", ft_isalpha('Z'));  // 1
//    printf("max: %d\n", ft_isalpha('1'));  // 0
//    printf("\n");
//
//    // ft_isdigit tests
//    printf("ft_isdigit tests:\n");
//    printf("min: %d\n", ft_isdigit('0'));  // 1
//    printf("mid: %d\n", ft_isdigit('5'));  // 1
//    printf("max: %d\n", ft_isdigit('a'));  // 0
//    printf("\n");
//
//    // ft_isalnum tests
//    printf("ft_isalnum tests:\n");
//    printf("min: %d\n", ft_isalnum('a'));  // 1
//    printf("mid: %d\n", ft_isalnum('5'));  // 1
//    printf("max: %d\n", ft_isalnum('@'));  // 0
//    printf("\n");
//
//    // ft_isascii tests
//    printf("ft_isascii tests:\n");
//    printf("min: %d\n", ft_isascii(0));    // 1
//    printf("mid: %d\n", ft_isascii(127));  // 1
//    printf("max: %d\n", ft_isascii(128));  // 0
//    printf("\n");
//
//    // ft_isprint tests
//    printf("ft_isprint tests:\n");
//    printf("min: %d\n", ft_isprint(32));   // 1
//    printf("mid: %d\n", ft_isprint(65));   // 1
//    printf("max: %d\n", ft_isprint(31));   // 0
//    printf("\n");
//
//    // ft_strlen tests
//    printf("ft_strlen tests:\n");
//    printf("min: %zu\n", ft_strlen(""));           // 0
//    printf("mid: %zu\n", ft_strlen("Hello"));      // 5
//    printf("max: %zu\n", ft_strlen("1234567890")); // 10
//    printf("\n");
//
//    // ft_memset tests
//    printf("ft_memset tests:\n");
//    char memset_str[11] = "0123456789";
//    printf("min: %s\n", (char *)ft_memset(memset_str, 'A', 1));    // A123456789
//    printf("mid: %s\n", (char *)ft_memset(memset_str, 'B', 5));    // BBBBB56789
//    printf("max: %s\n", (char *)ft_memset(memset_str, 'C', 10));   // CCCCCCCCCC
//    printf("\n");
//
//    // ft_bzero tests
//    printf("ft_bzero tests:\n");
//    char bzero_str[11] = "0123456789";
//    ft_bzero(bzero_str, 1);
//    printf("min: %s\n", bzero_str);  // 123456789
//    ft_bzero(bzero_str, 5);
//    printf("mid: %s\n", bzero_str);  // 6789
//    ft_bzero(bzero_str, 10);
//    printf("max: %s\n", bzero_str);  // (empty string)
//    printf("\n");
//
//    // ft_memcpy tests
//    printf("ft_memcpy tests:\n");
//    char dest1[20];
//    printf("min: %s\n", (char *)ft_memcpy(dest1, "Hello", 5));         // Hello
//    printf("mid: %s\n", (char *)ft_memcpy(dest1, "Hello, World!", 13)); // Hello, World!
//    printf("max: %s\n", (char *)ft_memcpy(dest1, "Goodbye, World!", 15)); // Goodbye, World!
//    printf("\n");
//
//    // ft_memmove tests
//    printf("ft_memmove tests:\n");
//    char dest2[20];
//    printf("min: %s\n", (char *)ft_memmove(dest2, "Hello", 5));         // Hello
//    printf("mid: %s\n", (char *)ft_memmove(dest2, "Hello, World!", 13)); // Hello, World!
//    printf("max: %s\n", (char *)ft_memmove(dest2, "Goodbye, World!", 15)); // Goodbye, World!
//    printf("\n");
//
//    // ft_memchr tests
//    printf("ft_memchr tests:\n");
//    printf("min: %s\n", (char *)ft_memchr("Hello, World!", 'H', 13));    // Hello, World!
//    printf("mid: %s\n", (char *)ft_memchr("Hello, World!", 'W', 13));    // World!
//    printf("max: %s\n", (char *)ft_memchr("Hello, World!", 'z', 13));    // (null)
//    printf("\n");
//
//    // ft_memcmp tests
//    printf("ft_memcmp tests:\n");
//    printf("min: %d\n", ft_memcmp("abc", "abc", 3));    // 0
//    printf("mid: %d\n", ft_memcmp("abc", "abd", 3));    // -1
//    printf("max: %d\n", ft_memcmp("abc", "aaa", 3));    // 1
//    printf("\n");
//
//    // ft_strdup tests
//    printf("ft_strdup tests:\n");
//    char *dup1 = ft_strdup("");
//    printf("min: %s\n", dup1); // (empty string)
//    free(dup1);
//    char *dup2 = ft_strdup("Hello");
//    printf("mid: %s\n", dup2); // Hello
//    free(dup2);
//    char *dup3 = ft_strdup("Hello, World!");
//    printf("max: %s\n", dup3); // Hello, World!
//    free(dup3);
//    printf("\n");
//
//    // Example usage of ft_strlcpy
//    printf("min: %zu\n", ft_strlcpy(dest4, "", 10)); // (empty string)
//    printf("mid: %zu\n", ft_strlcpy(dest4, "Hello", 10)); // Hello
//    printf("max: %zu\n", ft_strlcpy(dest4, "Hello, World!", 5)); // Hello
//
//    // Example usage of ft_strlcat
//    ft_strlcpy(dest6, "Hello", 50);
//    printf("min: %zu\n", ft_strlcat(dest6, "", 10)); // Hello
//    printf("mid: %zu\n", ft_strlcat(dest6, ", ", 10)); // Hello,
//    printf("max: %zu\n", ft_strlcat(dest6, "World!", 5)); // Hello, Worl
//
//    // ft_strlcat tests
//    printf("ft_strlcat tests:\n");
//    char dest7[20] = "Hello";
//    printf("min: %lu\n", ft_strlcat(dest7, "", 10)); // 5
//    printf("mid: %lu\n", ft_strlcat(dest7, ", ", 10)); // 7
//    printf("max: %lu\n", ft_strlcat(dest7, "World!", 10)); // 13
//    printf("\n");
//
//    // ft_strchr tests
//    printf("ft_strchr tests:\n");
//    printf("min: %s\n", ft_strchr("Hello, World!", 'H')); // Hello, World!
//    printf("mid: %s\n", ft_strchr("Hello, World!", 'W')); // World!
//    printf("max: %s\n", ft_strchr("Hello, World!", 'z')); // (null)
//    printf("\n");
//
//    // ft_strrchr tests
//    printf("ft_strrchr tests:\n");
//    printf("min: %s\n", ft_strrchr("Hello, World!", 'H')); // Hello, World!
//    printf("mid: %s\n", ft_strrchr("Hello, World!", 'o')); // orld!
//    printf("max: %s\n", ft_strrchr("Hello, World!", 'z')); // (null)
//    printf("\n");
//
//    // ft_strncmp tests
//    printf("ft_strncmp tests:\n");
//    printf("min: %d\n", ft_strncmp("abc", "abc", 3)); // 0
//    printf("mid: %d\n", ft_strncmp("abc", "abd", 3)); // -1
//    printf("max: %d\n", ft_strncmp("abc", "aaa", 3)); // 1
//    printf("\n");
//
//    // ft_strnstr tests
//    printf("ft_strnstr tests:\n");
//    printf("min: %s\n", ft_strnstr("Hello, World!", "Hello", 5)); // Hello, World!
//    printf("mid: %s\n", ft_strnstr("Hello, World!", "World", 13)); // World!
//    printf("max: %s\n", ft_strnstr("Hello, World!", "Goodbye", 13)); // (null)
//    printf("\n");
//
//    // ft_strmapi tests
//    printf("ft_strmapi tests:\n");
//    char *strmapi_result1 = ft_strmapi("abcdef", strmapi_toupper);
//    printf("toupper: %s\n", strmapi_result1);
//    free(strmapi_result1);
//    char *strmapi_result2 = ft_strmapi("ABCDEF", strmapi_tolower);
//    printf("tolower: %s\n", strmapi_result2);
//    free(strmapi_result2);
//    printf("\n");
//
//    // ft_striteri tests
//    printf("ft_striteri tests:\n");
//    char iteri_str1[] = "abcdef";
//    ft_striteri(iteri_str1, striteri_toupper);
//    printf("toupper: %s\n", iteri_str1);
//    char iteri_str2[] = "ABCDEF";
//    ft_striteri(iteri_str2, striteri_tolower);
//    printf("tolower: %s\n", iteri_str2);
//    printf("\n");
//
//    // ft_tolower tests
//    printf("ft_tolower tests:\n");
//    printf("min: %c\n", ft_tolower('A')); // a
//    printf("mid: %c\n", ft_tolower('M')); // m
//    printf("max: %c\n", ft_tolower('Z')); // z
//    printf("\n");
//
//    // ft_toupper tests
//    printf("ft_toupper tests:\n");
//    printf("min: %c\n", ft_toupper('a')); // A
//    printf("mid: %c\n", ft_toupper('m')); // M
//    printf("max: %c\n", ft_toupper('z')); // Z
//    printf("\n");

    return 0;
}
