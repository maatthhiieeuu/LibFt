#include "ft_ItoI.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	//printf(BLUE"\n\n---------------------- Début de la fonction memcpy ----------------------\n\n");
	if(!destination || !source || size == 0)
		return(NULL);

	char	*dest	= (char *)destination;
	char	*src	= (char *)source;
	size_t	i		= 0;

	//printf(PURPLE"dest = |%s|\nsrc = |%s|\nsize = %ld", dest, src, size);

	while(i < size)
	{
		dest[i] = src[i];
		i += 1;
	}

	//printf(BLUE"\n\n---------------------- Fin de la fonction memcpy ----------------------\n\n");
	return (destination);
}
void	*ft_memset(void *pointer, int value, size_t count)
{
	if(!pointer || count == 0)
		return(NULL);

	unsigned char	*memoryBloc	= (unsigned char *)pointer;
	unsigned char	character	= (unsigned char)value;
	size_t			i			= 0;
	
	while(i < count)
	{
		*memoryBloc = character;
		memoryBloc++;
		i += 1;
	}

	return (pointer);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i		= 0;
	char	*ptr	= NULL;
	ptr 			= (char	*)malloc((len + 1) * sizeof(char));
	if(!ptr || !s)
		return(NULL);

	size_t	len_source = ft_strlen(s);

	if(start > len_source - len)
	{
		ptr[i] = '\0';
		return(ptr);
	}
	
	while(s[start + i] != '\0' && i < len)
	{
		ptr[i] = s[start + i];
		i += 1;
	}

	ptr[i] = '\0';


	return(ptr);
}

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	//printf(BLUE"\n\n---------------------- Début de la fonction ft_strncmp ----------------------\n");
	if(!first || !second)
		perror("Error fonction strncmp");

	size_t	i	= 0;

	while(first[i] != 0 && second[i] != 0 && i < length)
	{
		//printf(ORANGE"first = %c\nsecond = %c\nlength = %ld", first[i], second[i], length);
		
		if(first[i] != second[i])
			return(first[i] - second[i]);
		
		i += 1;
	}

	//printf(BLUE"\n\n---------------------- Fin de la fonction ft_strncmp ----------------------\n");
	return(first[i] - second[i]);
}
size_t	ft_strlen(const char *string)
{
	if(!string)
		return(0);

	size_t	len	= 0;

	while(string[len] != '\0')
	{
		len += 1;
	}
	
	return (len);
}

int	ft_isalpha(int character)
{
	if(character > 64 && character < 91)
		return (1024);
	else if(character > 96 && character < 123)
		return (1024);

	return (0);
}
int	ft_isdigit(int character)
{
	if(character >= 48 && character <= 57)
	{
		return (2048);
	}

	return (0);	
}
