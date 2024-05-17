#ifndef LIBFT_H
#define LIBFT_H

int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
size_t	ft_strlen(const char *string);
void	*ft_memset(void *pointer, int value, size_t count);
void	ft_bzero(void *pointer, size_t n);

#endif //LIBFT_H