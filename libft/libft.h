#ifndef LIBFT_H
#define LIBFT_H

void	ft_bzero(void *pointer, size_t n);
int		ft_isalnum(int character);
int		ft_isalpha(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
void	*ft_memmove(void *destination, const void *source, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
char 	*ft_strchr(const char *string, int searched_char);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlen(const char *string);
char	*ft_strrchr(const char *string, int searched_char);
int		ft_tolower(int character);
int		ft_toupper(int character);

#endif //LIBFT_H