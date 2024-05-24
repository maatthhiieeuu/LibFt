#ifndef LIBFT_H
#define LIBFT_H

void	ft_bzero(void *pointer, size_t n);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
void	*ft_memmove(void *destination, const void *source, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
size_t	ft_strlen(const char *string);

#endif //LIBFT_H