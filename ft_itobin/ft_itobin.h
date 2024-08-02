#ifndef FT_ITOBIN_H
#define FT_ITOBIN_H

#include <stddef.h>


char	*ft_itobin(int n);
void	one_complement(char *octet);
void	two_complement(char *octet);
char	*limits_managed(char *octet, int n);
void	*ft_memset(void *pointer, int value, size_t count);
void	*ft_memcpy(void *destination, const void *source, size_t size);

#endif //FT_ITOBIN_H