#ifndef FT_BINTOI_H
#define FT_BINTOI_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>


#define RED "\033[1;91m"
#define GREEN "\033[1;32m"
#define ORANGE "\033[1;33m"
#define BLUE "\033[1;34m"
#define PURPLE "\033[1;35m"
#define BC "\033[0m"

int		ft_bintoi(char *bin);
char	*ft_bintohex(char *bin);
ssize_t		ft_hextoi(char	*hex);
void	*ft_memset(void *pointer, int value, size_t count);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strncmp(const char *first, const char *second, size_t length);
size_t	ft_strlen(const char *string);
size_t	factorization(size_t factor);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
char	*ft_itobin(int n);
char	*limits_managed(char *octet, int n);
void	two_complement(char *octet);
void	one_complement(char *octet);
void	*ft_memcpy(void *destination, const void *source, size_t size);


#endif // FT_BINTOI_H