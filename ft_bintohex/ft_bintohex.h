#ifndef FT_BINTOHEX_H
#define FT_BINTOHEX_H

#include <stddef.h>

char	*ft_bintohex(char *bin);
void	*ft_memset(void *pointer, int value, size_t count);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_strncmp(const char *first, const char *second, size_t length);
size_t	ft_strlen(const char *string);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);

#endif //FT_BINTOHEX_H