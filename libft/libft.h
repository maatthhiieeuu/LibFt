#ifndef LIBFT_H
#define LIBFT_H

int		ft_atoi(const char *string);
void	ft_bzero(void *pointer, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int character);
int		ft_isalpha(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
void	*ft_memchr(const void *memory_block, int searched_char, size_t size);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void	*ft_memmove(void *destination, const void *source, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
char 	*ft_strchr(const char *string, int searched_char);
char	*ft_strdup(const char *source);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlen(const char *string);
int		ft_strncmp(const char *first, const char *second, size_t length);
char 	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *string, int searched_char);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int character);
int		ft_toupper(int character);

#endif //LIBFT_H