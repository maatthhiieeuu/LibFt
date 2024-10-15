#ifndef FT_ITOI_H
#define FT_ITOI_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>


#define RED "\033[1;91m"
#define GREEN "\033[1;32m"
#define ORANGE "\033[1;33m"
#define BLUE "\033[1;34m"
#define PURPLE "\033[1;35m"
#define TS "\033[1;36m"
#define BC "\033[0m"

void	bin_revers(char	*octet);
char	*ft_bintohex(char *bin);
int		ft_bintoi(char *bin, char sign);
void	complement_reverse(char* hex);
size_t	factorization(size_t factor);
char	*ft_hex_neg_to_hex_pos(char *hex, char sign);
ssize_t	ft_hextoi(char	*hex, char sign);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
char	*ft_itobin(int n, char sign);
char	*limits_managed(char *octet, int n);
void	*ft_memset(void *pointer, int value, size_t count);
void	*ft_memset(void *pointer, int value, size_t count);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	one_complement(char *octet);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strncmp(const char *first, const char *second, size_t length);
size_t	ft_strlen(const char *string);
void	two_complement(char *octet);

#endif // FT_ITOI_H